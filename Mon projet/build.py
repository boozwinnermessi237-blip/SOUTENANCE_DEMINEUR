import os
import subprocess
import sys

def build_project():
    print(" Build du projet Démineur...")

    # 1️ Récupération automatique de tous les fichiers .cpp
    sources = []
    for root, dirs, files in os.walk("."):
        for file in files:
            if file.endswith(".cpp"):
                sources.append(os.path.join(root, file))

    if not sources:
        print(" Aucun fichier .cpp trouvé.")
        return

    # 2️ Dossiers d'inclusion
    include_dirs = [
        "-I.",
        "-Ithirdparty/SDL3/include",
        "-Ithirdparty/imgui"
    ]

    # 3️ Librairies selon le système
    libraries = []

    if sys.platform == "win64":
        libraries = [
            "-lSDL3",
            "-limm32"
        ]
        output = "demineur.exe"

    elif sys.platform == "darwin":  # macOS
        libraries = [
            "-lSDL3",
            "-framework",
            "Cocoa"
        ]
        output = "demineur"

    else:  # Linux
        libraries = [
            "-lSDL3",
            "-ldl",
            "-lpthread"
        ]
        output = "demineur"

    # 4️ Commande de compilation
    cmd = [
        "g++",
        "-std=c++17",
        "-Wall",
        "-Wextra",
        "-g",
        *sources,
        *include_dirs,
        *libraries,
        "-o",
        output
    ]

    #  Affichage de la commande (debug / pédagogie)
    print(" Commande de compilation :")
    print(" ".join(cmd))

    # 6️ Exécution
    result = subprocess.run(cmd)

    if result.returncode == 0:
        print(" Compilation réussie !")
        print(f" Exécutable généré : {output}")
    else:
        print(" Erreur de compilation.")

# Point d’entrée du script
if __name__ == "__main__":
    build_project()


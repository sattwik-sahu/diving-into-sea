import subprocess
import argparse
from colorama import init as colorama_init, Fore
import os

colorama_init()

EXTENSION_LEN = 4

parser = argparse.ArgumentParser()
parser.add_argument("filename", type=str)

args = parser.parse_args()
filename = args.filename
outfile = f'./out/{filename[:-EXTENSION_LEN]}.out'

if not 'out' in os.listdir():
    os.mkdir('out')

print(f"{Fore.LIGHTMAGENTA_EX}[Compiling]\t🛠{Fore.RESET}\t{filename}")
compile = subprocess.getoutput(' '.join(['g++', filename, '-o', outfile]))
if not compile:
    print(
        f"{Fore.LIGHTGREEN_EX}[Compiled]\t🎉\t{Fore.RESET}Successfully compiled!")
    print(
        f"{Fore.LIGHTGREEN_EX}[Running]\t🏁{Fore.RESET}\t{filename[:-EXTENSION_LEN]}\n{'=' * 50}\n")
    subprocess.run([outfile])
else:
    print(f"{Fore.RED}[Error]\t\t❌\t{Fore.RESET}Compilation error\n{compile}")
print()

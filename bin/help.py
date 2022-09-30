#!/usr/bin/python3
from colorama import *


def help():
    """prints out help message
    """
    print(f"{Fore.RED} ====================== {Back.YELLOW} GitMaster {Style.RESET_ALL}{Fore.RED} ============================ \n")
    print(f"{Fore.CYAN}This program helps you to excute git commands more effectivly\n by using inline command (one liner) or with choose like console\n{Fore.YELLOW}\nUsage: {Fore.RED}./GitMaster {Fore.GREEN}<-flag> [{Fore.RED}command{Fore.GREEN}] {Fore.MAGENTA}<--another-flag> (optional)\n")
    print(f"{Fore.YELLOW}Flags\n")
    print("\t-a\tAdd multiple files to git\n")
    print("\t-c\tCommit changes to git folowed by the commit message\n")
    print("\t-p\tPush changes to git followed by the upstream branch (optional) default upstream is main\n")
    print("\t-h\tPrints this help message\n")
    print("\t-ch\tchange to branch followed by the branch name\n")
    print("\t-cr\tCreate a new git branch\n\n")
    print("Example :\n")
    print("\t./GitMaster -a main.py master.py options.py -c \"initial commit\" -p dev \n")
    print("\t./GitMaster -a main.py -c \"commit msg\" -p\n")

help()

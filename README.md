# 7z_batParser

Program generates the bat-file with instructions to command line to archive items in folder to separated 7z archives.

You need to have installed 7z archiver and configured PATH variable to 7z.exe

Usage:
1. Put 7z_batParser.exe into folder with items to archive in separated archives
2. Run 7z_barParser.exe
3. Run generated archive_items.bat

Make sure, you have set the PATH variable, so system can see the path to 7z.exe. Check it out:

Control Panel -> System -> Advanced system settings -> Environment Variables

(Панель управления -> Система -> Дополнительные параметры системы -> Переменные среды)

Select the PATH variable, and make sure, it contains path to directory with 7z.exe. If it doesn't, then add to the end of existing value of PATH variable ";" and your path to 7z directory. If necessary, reboot the system.

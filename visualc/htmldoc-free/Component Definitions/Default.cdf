[Components]
component0=AFM Files
component1=Program Executables
component2=Data Files
component3=Documentation

[TopComponents]
component0=Program Executables
component1=Documentation
component2=AFM Files
component3=Data Files

[SetupType]
setuptype0=Typical

[AFM Files]
required0=Program Executables
SELECTED=Yes
FILENEED=STANDARD
HTTPLOCATION=
STATUS=Adobe Font Metric Files
UNINSTALLABLE=Yes
TARGET=<TARGETDIR>\afm
FTPLOCATION=
VISIBLE=Yes
DESCRIPTION=Adobe Font Metric Files
DISPLAYTEXT=Adobe Font Metric Files
IMAGE=
DEFSELECTION=Yes
filegroup0=AFM Files
COMMENT=
INCLUDEINBUILD=Yes
INSTALLATION=ALWAYSOVERWRITE
COMPRESSIFSEPARATE=No
MISC=
ENCRYPT=No
DISK=ANYDISK
TARGETDIRCDROM=
PASSWORD=
TARGETHIDDEN=General Application Destination\afm

[Program Executables]
SELECTED=Yes
FILENEED=STANDARD
HTTPLOCATION=
STATUS=Program Files
UNINSTALLABLE=Yes
TARGET=<TARGETDIR>
FTPLOCATION=
VISIBLE=Yes
DESCRIPTION=Program Files
DISPLAYTEXT=Program Files
IMAGE=
DEFSELECTION=Yes
filegroup0=Program Executables
requiredby0=Data Files
COMMENT=
INCLUDEINBUILD=Yes
requiredby1=AFM Files
INSTALLATION=ALWAYSOVERWRITE
requiredby2=Documentation
COMPRESSIFSEPARATE=No
MISC=
ENCRYPT=No
DISK=ANYDISK
TARGETDIRCDROM=
PASSWORD=
TARGETHIDDEN=General Application Destination

[Info]
Type=CompDef
Version=1.00.000
Name=

[SetupTypeItem-Typical]
Comment=
item0=AFM Files
item1=Program Executables
item2=Data Files
item3=Documentation
Descrip=
DisplayText=

[Documentation]
required0=Program Executables
SELECTED=Yes
FILENEED=STANDARD
HTTPLOCATION=
STATUS=Documentation
UNINSTALLABLE=Yes
TARGET=<TARGETDIR>\doc
FTPLOCATION=
VISIBLE=Yes
DESCRIPTION=Documentation
DISPLAYTEXT=Documentation
IMAGE=
DEFSELECTION=Yes
filegroup0=Documentation
COMMENT=
INCLUDEINBUILD=Yes
INSTALLATION=ALWAYSOVERWRITE
COMPRESSIFSEPARATE=No
MISC=
ENCRYPT=No
DISK=ANYDISK
TARGETDIRCDROM=
PASSWORD=
TARGETHIDDEN=General Application Destination\doc

[Data Files]
required0=Program Executables
SELECTED=Yes
FILENEED=STANDARD
HTTPLOCATION=
STATUS=Data Files
UNINSTALLABLE=Yes
TARGET=<TARGETDIR>\data
FTPLOCATION=
VISIBLE=Yes
DESCRIPTION=Data Files
DISPLAYTEXT=Data Files
IMAGE=
DEFSELECTION=Yes
filegroup0=Data Files
COMMENT=
INCLUDEINBUILD=Yes
INSTALLATION=ALWAYSOVERWRITE
COMPRESSIFSEPARATE=No
MISC=
ENCRYPT=No
DISK=ANYDISK
TARGETDIRCDROM=
PASSWORD=
TARGETHIDDEN=General Application Destination\data


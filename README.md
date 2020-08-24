# PatternViewerDemo
정의 : Micro Pattern Compiler 에 생성된 .pat 파일을 분석 및 사용자 편의 인터페이스 제공을 목표로 한다. 이 프로젝트는 해당 과제에 앞서 Demo 버전이며, 추후에 현재 버전을 reuse를 하여,
새로운 프로젝트를 진행할 예정입니다.

# System Interfaces.
- Input은 Micro Pattern Compiler의 Output인 Object File(*.pat)이 사용된다.
- QT GUI의 interface는 FILE HEADER, COMMON HEADER, COMMON BODY, BLOCK HEADER, BLOCK BODY으로 구성한다.
- Object File(*.pat)은 QT 라이브러리를 통해 사용된다.

# 개발 환경
- OS : CentOS7-x86_64-DVD-2003
- VMware : VMware Workstation 15 Player-15.5.6-16341506
- Kernel : 3.10.0-1127.el7.x86_64
- GUI : Qt version 5.8.0 
- Editor
- QtCreator: 4.2.1
- GCC : 5.3.1 20160406(Red Hat 5.3.1-6),64bit

# Operation
현재 진행 작업중입니다.  
-	사용자는 실행파일(.exe)를 이용하여 동작시킨다. 
-	QT에서 제공되는 QFileDialog Class를 이용하여 Object File(*.pat)를 Load를 한다.
-	Load 된 File를 GUI에서 Object File Format(*.pat)에 맞춰 데이터를 출력한다. -> 작업 진행 중.
-	사용자는 GUI에서 제공되는 함수를 이용하여 Font size를 변경할 수 있다. -> 아직 구현 안함.
-	사용자는 GUI에서 제공되는 함수를 이용하여 데이터를 검색할 수 있다. -> GUI만 구현 완료
-	Load 된 데이터에 대한 정보를 GUI 환경에서 출력한다. ->GUI 구현 완료 및 추가적으로 함수 작성 진행중.
-	단어 검색 시, modeless dialog 기능을 제공한다. -> 구현완료
-	원본 Object 파일(*.pat) 및 파일 포맷에 맞춘 View가 함께 제공된다. -> 함수 작성중.

![image](https://github.com/user-attachments/assets/e41fe196-1c07-43e1-bf1e-47757c9caa68)

<br/>
<br/>

# 🥊 Starfist Express
> **Platform Fighter Starter Kit 기반으로 제작한 최대 4인 멀티플레이 플랫폼 파이터 게임입니다.**

<br/>
<br/>

## 프로젝트 소개
> **본 프로젝트는 에픽게임즈 Fab 마켓플레이스에 배포된 Platform Fighter Starter Kit(이하 PFSK)을 기반으로,**  
> **실습 목적의 신규 기능 개발 및 버그 수정을 통해 닌텐도 <대난투> 스타일의 대전 게임을 완성하는 과정을 다룹니다.**

<br>

- 빠른 프로토타이핑 : 기존 키트의 이동·공격·피격 시스템을 그대로 활용하며 UI/네트워크/AI를 확장  

- 실전 멀티플레이 : Listen Server 모델로 최대 4인 동기화, 세션 관리, 레디 / 스타트 플로우 구현  

- 확장 가능한 구조 : 블루프린트 + C++ 혼합 구조로 신규 스테이지·캐릭터·아이템을 손쉽게 추가 가능

<br/>
<br/>

## 주요 기능 
- 게임 모드
  - 싱글플레이 시나리오 : 3단계 난이도, 단계별 AI 난이도 변환
  - 멀티 대전 : 1 vs 1 / 2 vs 2, 인원 짝수 충족 시 자동 시작
  - 멀티 협력 : 2P + AI 2기

<br/>

- 메뉴·UI
  - 타이틀 → 모드선택 → 캐릭터/스테이지 → 플레이 → 결과까지 끊김 없는 흐름
  - 호스트, 클라이언트 캐릭터 선택 완료 -> 호스트 Start
  - 싱글플레이) 재도전·다음 스테이지 이동
  - 멀티플레이) 메뉴로 이동

<br/>

- 옵션
  - 효과음·BGM 조절 슬라이더
  - 해상도 변경

<br/>

- 네트워크
  - Listen Server 기반, 세션 만들기·찾기·입장

<br/>

- AI
  - 협력 전용 AI 팀메이트
  - 난이도 세팅

<br/>

- 아이템
  - Super포션 : super 게이지 획득
  - Percent포션 : 캐릭터 Percent 감소기능

<br/>
<br/>

## 프로젝트 버전
- **언리얼 버전(5.5.4)로 진행**  

<br/>
<br/>

## 팀원 소개 및 역할 분담

| 지승현 | 김동현 | 조영환 | 송현우 | 양준모 |
|:------:|:------:|:------:|:------:|:------:|
| <img src="https://github.com/user-attachments/assets/41ef5d05-ce9c-46f2-8d64-73e3f21ed454" alt="지승현" width="150"> | <img src="https://github.com/user-attachments/assets/b228858e-eb02-4ee2-b005-c958cf1d1b7f" alt="김동현" width="150"> | <img src="https://github.com/user-attachments/assets/3ea47449-ec9d-4f95-9b98-2122886ee6ab" alt="조영환" width="150"> | <img src="https://github.com/user-attachments/assets/cc6dd589-12f9-4b34-a3cb-4ff3a8b26feb" alt="송현우" width="150"> | <img src="https://github.com/user-attachments/assets/a6f4a94b-4cf6-4df5-9275-18fb1aa2d598" alt="양준모" width="150"> |
| <ul><li>아이템 구현</li><li>캐릭터 동기화</li></ul> | <ul><li>레벨매니저 구현</li><li>대전, 협력모드 구현</li></ul> | <ul><li>보스구현</li><li>ui 동기화</li></ul> | <ul><li>AI개선</li><li>캐릭터 입력 개선</li></ul> | <ul><li>옵션기능 구현</li><li>엔딩ui 개선</li></ul> |

<br/>
<br/>

## 조작키

<br/>
<br/>

## 개발 워크플로우
**브랜치 전략**
브랜치 전략은 Git Flow를 기반으로 하며, 다음과 같은 브랜치를 사용합니다.

- Main Branch
  - 배포 가능한 상태의 코드를 유지합니다.
  - 모든 배포는 이 브랜치에서 이루어집니다.
  
- [name-#num]/[SubName]Branch
  - 팀원 각자의 개발 브랜치입니다.
  - 모든 기능 개발은 이 브랜치에서 이루어집니다.

<br/>
<br/>

## 커밋 컨벤션
```
type : subject

body 
```

<br/>

### type 종류
```
feat : 새로운 기능 추가
fix : 버그 수정
docs : 문서 수정
style : 코드 포맷팅, 세미콜론 누락, 코드 변경이 없는 경우
refactor : 코드 리펙토링
test : 테스트 코드, 리펙토링 테스트 코드 추가
chore : 빌드 업무 수정, 패키지 매니저 수정
```

<br/>

### 커밋 이모지
```
== 코드 관련
📝	코드 작성
🔥	코드 제거
🔨	코드 리팩토링
💄	UI / style 변경

== 문서&파일
📰	새 파일 생성
🔥	파일 제거
📚	문서 작성

== 버그
🐛	버그 리포트
🚑	버그를 고칠 때

== 기타
🐎	성능 향상
✨	새로운 기능 구현
💡	새로운 아이디어
🚀	배포
```

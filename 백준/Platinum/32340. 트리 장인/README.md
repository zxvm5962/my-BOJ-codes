# [Platinum IV] 트리 장인 - 32340 

[문제 링크](https://www.acmicpc.net/problem/32340) 

### 성능 요약

메모리: 12580 KB, 시간: 48 ms

### 분류

백트래킹, 브루트포스 알고리즘, 조합론, 수학, 트리

### 제출 일자

2024년 11월 28일 13:54:13

### 문제 설명

<p>세종이는 한양에서 유명한 트리 장인이다. 어떤 그래프라도 들고 오면 멋진 트리로 탈바꿈해준다!</p>

<p>정점이 $N$개, 간선이 $M$개인 단순 그래프가 주어진다. 단순 그래프란, 각 간선이 서로 다른 두 점을 이으며, 어떤 두 정점 $u$, $v$에 대해서도 $u$와 $v$를 잇는 간선이 둘 이상 존재하지 않는 그래프를 말한다.</p>

<p>세종이는 정점 $1,2,\ldots ,N$ 중 두 정점을 잇는 $0$개 이상의 새로운 간선들을 적절히 추가하여 이 그래프를 트리로 만들 것이다.</p>

<p>세종이는 작업에 들어가기 전에 위 조건대로 그래프를 트리로 만드는 방법의 수를 가늠해 보려 한다. 세종이를 도와 그 방법의 가짓수가 $K$가지를 넘는지, 넘지 않는다면 정확한 가짓수까지 구해보자! 단, 추가한 간선 집합이 다를 경우에만 다른 방법으로 간주하며, 모든 간선에는 방향성이 없다.</p>

### 입력 

 <p>첫 번째 줄에 세 정수 $N$, $M$, $K$가 공백으로 구분되어 주어진다. $(2 \le N \le 100\, 000;$ $1 \le M \le 200\, 000;$ $1 \le K \le 3\, 000)$</p>

<p>이후 $M$개의 줄에 걸쳐 $i$번째 간선이 잇는 두 정점 $u_i$, $v_i$가 공백으로 구분되어 주어진다. $(1 \le u_i \lt v_i \le N;$ $(u_i, v_i) \ne (u_j, v_j) )$</p>

### 출력 

 <p>조건대로 그래프를 트리로 만드는 방법의 가짓수가 $K$가지를 넘는다면 <span style="color:#e74c3c;"><code>-1</code></span>을, $K$가지를 넘지 않는다면 정확한 가짓수를 출력한다.</p>


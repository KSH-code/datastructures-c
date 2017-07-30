# 2017-07-30
## STACK을 사용해서 계산기 구현
### 수식의 표기법
<ul>
    <li>중위 표기법 (infix notation)</li>
    <li>전위 표기법 (prefix notation)</li>
    <li>후위 표기법 (postfix notation)</li>
</ul>

<ul>
    <li>5 + 2 / 7</li>
    <li>+ 5 / 2 7</li>
    <li>5 2 7 / +</li>
</ul>

### 중위 표기식 -> 후위 표기식 문제 풀이
<ul>
    <li>3+2*4</li>
    <li>2*4+3</li>
    <li>2*1+3/2</li>
    <li>(1*2+3)/4</li>
    <li>(1*2+3)/4</li>
</ul>
<ul>
    <li>324*+</li>
    <li>24*3+</li>
    <li>21*32/+</li>
    <li>12*3+4/</li>
    <li>123*+4/</li>
</ul>

[C파일](./1_InfixToPostfixMain.c)

    int GetOpPrec(char op) 연산자의 우선 순의를 반환한다.
    int WhoPrecOp(char op1, char op2) 연산자가 존재하면 SPeek 함수를 호출해서 연산자 우선순위 비교한다.
    void ConvToRPNExp(char exp[]) 중위 표기식을 후위 표기식으로 변환한다.

### 후위 표시기 계산 문제 풀이
<ul>
    <li>42*8+</li>
    <li>123+*4/</li>
</ul>
<ul>
    <li>4*2+8=8</li>
    <li>(2+3)*1/4=1.25</li>
</ul>


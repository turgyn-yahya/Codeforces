<h3><a href="https://codeforces.com/contest/1538/problem/C" target="_blank" rel="noopener noreferrer">Количество пар</a></h3>

<div class="header"><div class="title">C. Количество пар</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>2 секунды</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>256 мегабайт</div><div class="input-file input-standard"><div class="property-title">ввод</div>стандартный ввод</div><div class="output-file output-standard"><div class="property-title">вывод</div>стандартный вывод</div></div><div><p>Вам задан массив $$$a$$$, состоящий из $$$n$$$ целых чисел. Найдите количество пар индексов $$$(i, j)$$$ ($$$1 \le i < j \le n$$$), для которых сумма $$$a_i + a_j$$$ больше или равна $$$l$$$ и меньше или равна $$$r$$$ (то есть $$$l \le a_i + a_j \le r$$$).</p><p>Например, если $$$n = 3$$$, $$$a = [5, 1, 2]$$$, $$$l = 4$$$ и $$$r = 7$$$, то подходят две пары: </p><ul> <li> $$$i=1$$$ и $$$j=2$$$ ($$$4 \le 5 + 1 \le 7$$$); </li><li> $$$i=1$$$ и $$$j=3$$$ ($$$4 \le 5 + 2 \le 7$$$). </li></ul></div><div class="input-specification"><div class="section-title">Входные данные</div><p>В первой строке находится целое число $$$t$$$ ($$$1 \le t \le 10^4$$$). Далее следуют $$$t$$$ наборов входных данных.</p><p>В первой строке каждого набора входных данных находятся три целых числа $$$n, l, r$$$ ($$$1 \le n \le 2 \cdot 10^5$$$, $$$1 \le l \le r \le 10^9$$$) — количество чисел в массиве и ограничения на сумму в паре.</p><p>Во второй строке находится $$$n$$$ целых чисел $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$). </p><p>Гарантируется, что сумма $$$n$$$ по всем наборам входных данных не превышает $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>Для каждого набора входных данных выведите одно целое число — количество пар индексов $$$(i, j)$$$ ($$$i < j$$$), для которых $$$l \le a_i + a_j \le r$$$.</p></div><div class="sample-tests"><div class="section-title">Пример</div><div class="sample-test"><div class="input"><div class="title">Входные данные<div title="Скопировать" data-clipboard-target="#id006718182052140913" id="id005998794105094545" class="input-output-copier">Скопировать</div></div><pre id="id006718182052140913">4
3 4 7
5 1 2
5 5 8
5 1 2 4 3
4 100 1000
1 1 1 1
5 9 13
2 5 5 1 1
</pre></div><div class="output"><div class="title">Выходные данные<div title="Скопировать" data-clipboard-target="#id0004276384581532777" id="id004614600004885636" class="input-output-copier">Скопировать</div></div><pre id="id0004276384581532777">2
7
0
1
</pre></div></div></div>
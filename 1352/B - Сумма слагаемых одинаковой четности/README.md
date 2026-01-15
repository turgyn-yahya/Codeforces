<h3><a href="https://codeforces.com/contest/1352/problem/B" target="_blank" rel="noopener noreferrer">Сумма слагаемых одинаковой четности</a></h3>

<div class="header"><div class="title">B. Сумма слагаемых одинаковой четности</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>1 секунда</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>256 мегабайт</div><div class="input-file input-standard"><div class="property-title">ввод</div>стандартный ввод</div><div class="output-file output-standard"><div class="property-title">вывод</div>стандартный вывод</div></div><div><p>Заданы два целых положительных числа $$$n$$$ ($$$1 \le n \le 10^9$$$) и $$$k$$$ ($$$1 \le k \le 100$$$). Представьте число $$$n$$$ в виде суммы $$$k$$$ положительных целых чисел одинаковой четности (с одинаковыми остатками от деления на $$$2$$$). </p><p>Иными словами, найдите такие $$$a_1, a_2, \ldots, a_k$$$, что все $$$a_i>0$$$, $$$n = a_1 + a_2 + \ldots + a_k$$$ и либо все $$$a_i$$$ одновременно четные, либо все $$$a_i$$$ одновременно нечетные. Если такого представления не существует, то сообщите об этом.</p></div><div class="input-specification"><div class="section-title">Входные данные</div><p>В первой строке записано целое число $$$t$$$ ($$$1 \le t \le 1000$$$) — количество наборов входных данных в тесте. Далее записаны $$$t$$$ наборов входных данных по одному в строке.</p><p>Каждый набор представляет собой два целых положительных числа $$$n$$$ ($$$1 \le n \le 10^9$$$) и $$$k$$$ ($$$1 \le k \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>Для каждого набора входных данных выведите:</p><ul> <li> <span class="tex-font-style-tt">YES</span> и искомые $$$a_i$$$, если ответ существует (если ответов несколько, то выведите любой из них); </li><li> <span class="tex-font-style-tt">NO</span>, если ответа не существует. </li></ul><p>Буквы в словах <span class="tex-font-style-tt">YES</span> и <span class="tex-font-style-tt">NO</span> можно выводить в любом регистре.</p></div><div class="sample-tests"><div class="section-title">Пример</div><div class="sample-test"><div class="input"><div class="title">Входные данные<div title="Скопировать" data-clipboard-target="#id003698660657864633" id="id00028504875764643" class="input-output-copier">Скопировать</div></div><pre id="id003698660657864633">8
10 3
100 4
8 7
97 2
8 8
3 10
5 3
1000000000 9
</pre></div><div class="output"><div class="title">Выходные данные<div title="Скопировать" data-clipboard-target="#id006690119442789886" id="id009722299971254179" class="input-output-copier">Скопировать</div></div><pre id="id006690119442789886">YES
4 2 4
YES
55 5 5 35
NO
NO
YES
1 1 1 1 1 1 1 1
NO
YES
3 1 1
YES
111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111120
</pre></div></div></div>
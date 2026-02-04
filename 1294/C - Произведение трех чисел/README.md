<h3><a href="https://codeforces.com/contest/1294/problem/C" target="_blank" rel="noopener noreferrer">Произведение трех чисел</a></h3>

<div class="header"><div class="title">C. Произведение трех чисел</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>2 секунды</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>256 мегабайт</div><div class="input-file input-standard"><div class="property-title">ввод</div>стандартный ввод</div><div class="output-file output-standard"><div class="property-title">вывод</div>стандартный вывод</div></div><div><p>Вам задано целое число $$$n$$$. Найдите три <span class="tex-font-style-bf">различных целых числа</span> $$$a, b, c$$$ таких, что $$$2 \le a, b, c$$$ и $$$a \cdot b \cdot c = n$$$ или скажите, что невозможно сделать это.</p><p>Если существует несколько подходящих ответов, вы можете вывести любой.</p><p>Вам нужно ответить на $$$t$$$ независимых наборов входных данных.</p></div><div class="input-specification"><div class="section-title">Входные данные</div><p>Первая строка входных данных содержит одно целое число $$$t$$$ ($$$1 \le t \le 100$$$) — количество наборов входных данных.</p><p>Следующие $$$n$$$ строк описывают наборы входных данных. $$$i$$$-й набор входных данных задан с новой строки в виде одного целого числа $$$n$$$ ($$$2 \le n \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>Выведите ответ для каждого набора входных данных. Выведите «<span class="tex-font-style-tt">NO</span>» если невозможно представить $$$n$$$ как $$$a \cdot b \cdot c$$$ для каких-то <span class="tex-font-style-bf">различных целых чисел</span> $$$a, b, c$$$ таких, что $$$2 \le a, b, c$$$.</p><p>Иначе выведите «<span class="tex-font-style-tt">YES</span>» и <span class="tex-font-style-bf">любое</span> такое возможное представление.</p></div><div class="sample-tests"><div class="section-title">Пример</div><div class="sample-test"><div class="input"><div class="title">Входные данные<div title="Скопировать" data-clipboard-target="#id0026894087125211397" id="id003208733144439062" class="input-output-copier">Скопировать</div></div><pre id="id0026894087125211397">5
64
32
97
2
12345
</pre></div><div class="output"><div class="title">Выходные данные<div title="Скопировать" data-clipboard-target="#id0012094792826068546" id="id009626856531485333" class="input-output-copier">Скопировать</div></div><pre id="id0012094792826068546">YES
2 4 8 
NO
NO
NO
YES
3 5 823 
</pre></div></div></div>
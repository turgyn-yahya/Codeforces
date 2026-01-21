<h3><a href="https://codeforces.com/contest/1475/problem/A" target="_blank" rel="noopener noreferrer">Нечетный делитель</a></h3>

<div class="header"><div class="title">A. Нечетный делитель</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>2 секунды</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>256 мегабайт</div><div class="input-file input-standard"><div class="property-title">ввод</div>стандартный ввод</div><div class="output-file output-standard"><div class="property-title">вывод</div>стандартный вывод</div></div><div><p>Вам дано целое число $$$n$$$. Проверьте, есть ли у $$$n$$$ нечетный делитель, отличный от единицы (существует ли такое число $$$x$$$ ($$$x > 1$$$), что $$$n$$$ делится на $$$x$$$ и $$$x$$$ нечетно).</p><p>Например, если $$$n=6$$$, то существует $$$x=3$$$. Если же $$$n=4$$$, то такого числа не существует.</p></div><div class="input-specification"><div class="section-title">Входные данные</div><p>В первой строке записано одно целое число $$$t$$$ ($$$1 \le t \le 10^4$$$) — количество наборов входных данных. Далее следуют $$$t$$$ наборов входных данных.</p><p>Каждый набор входных данных содержит одно целое число $$$n$$$ ($$$2 \le n \le 10^{14}$$$).</p><p>Обратите внимание, что числа в некоторых наборах входных данных не влезают в $$$32$$$-битный целочисленный тип, поэтому вы должны использовать как минимум $$$64$$$-битный целочисленный тип вашего языка программирования.</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>Для каждого набора входных данных в отдельной строке выведите: </p><ul> <li> «<span class="tex-font-style-tt">YES</span>», если у $$$n$$$ есть нечетный делитель отличный от единицы; </li><li> «<span class="tex-font-style-tt">NO</span>» в противном случае. </li></ul><p>Вы можете выводить «<span class="tex-font-style-tt">YES</span>» и «<span class="tex-font-style-tt">NO</span>» в любом регистре (например, строки <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> и <span class="tex-font-style-tt">YES</span> будут распознаны как положительный ответ).</p></div><div class="sample-tests"><div class="section-title">Пример</div><div class="sample-test"><div class="input"><div class="title">Входные данные<div title="Скопировать" data-clipboard-target="#id007453994291866408" id="id006128605186933741" class="input-output-copier">Скопировать</div></div><pre id="id007453994291866408">6
2
3
4
5
998244353
1099511627776
</pre></div><div class="output"><div class="title">Выходные данные<div title="Скопировать" data-clipboard-target="#id0007856574196717603" id="id001721416287649764" class="input-output-copier">Скопировать</div></div><pre id="id0007856574196717603">NO
YES
NO
YES
YES
NO
</pre></div></div></div>
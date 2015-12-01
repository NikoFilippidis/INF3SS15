# INF3SS15

1)
Kooperative Threads arbeiten gemeinsam an einer gestellten Aufgabe. Bei Aufgabe 1 arbeiten die Producer gemeinsam mit den Consumern indem sie ihnen die Zuffalszahlen bereitstellen und die Consumer diese "weiterverarbeiten".
Konkurrierende Threads müssen nicht notwendigerweise an eineer gemeinsamen Ausgabe arbeiten und müssen sich die bereitgestellten Betriebsmittel "teilen". Auch diesen Aspekt sieht man in Aufgabe 1, da auch hier die Threads sich Betriebsmittel teilen müssen.

2)
Synchronisation bei Threads bedeutet, dass diese ihre Abläufe abhängig von anderen Threads steuern. Zum Beispiel wartet Thread A mit der Benutzung eines Betriebsmittels bis Thread B dieses nichtmehr Benötigt. Dazu werden ziwschen den Threads Signale (sogenannte Semaphoren) ausgetauscht.
Kommunikation ziwschen Threads bedeutet, dass diese untereinander Botschaften austauschen. Hierbei beschränkt man sich aber nicht nur auf den Austausch von Signalen, sondern richtige Botschaften über sogenannte Pipes. In Java gibt es dafür zum Beispiel spezielle Stream-Klassen (PipeOutputStream/PipeInputStream).
Koordination fasst die Begriffe Synchronisation und Kommunikation zwischen Threads zusammen.

3)
Scheinbare Nebenläufigkeit ist eine Illusion. Prozesse und Threads werden klausal abhänig ausgeführt. 
Z.b auf Architekturen mit einer CPU. Hier wechselt ein Scheduler zwischen den Threads und den Prozessen.
Durch die schnelle Geschwindigkeit des Schedulers entsteht eine scheinbare Nebenläufigkeit. Voraussetzung für
echte Nebenläufigkeit, ist eine Architektur, welche es ermöglicht Ereignisse Zeitlich Parallel auszuführen (Systeme mit Multi-CPU oder Multi-Core CPUs).

4)
Das Lost-Update-Problem bezeichnet die Problematik die Auftreten kann, wenn zeitgleich mehrere Schreibzugriffe (von verschiedenen Threads) auf eine gemeinsame "Information" zugreifen wollen (zum Beispiel eine globale Variable neu setzen wollen). Eine Veränderung der Information durch den ersten Thread kann durch die fast zeitgleiche Änderung des zweiten Threads einfach überschrieben werden.
Das Dirty-Read-Problem tritt dann auf, wen Daten von einer Thread gelesen werden sollen, die allerdings gerade von einem zweiten Thread gerade geändert werden. Dieses Problem tritt oft bei größeren Datenbanken auf.
Diese beiden Probleme lassen sich durch korrektes Synchronisieren der Threads umgehen.

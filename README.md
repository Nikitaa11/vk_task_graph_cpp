# Калькулятор расстояний в графе

Эта программа вычисляет кратчайшие расстояния от заданной начальной вершины до всех остальных вершин в неориентированном графе без весов. Структура графа считывается из файла `graph.txt`.

## Содержание

1.  [Описание](#описание)
2.  [Формат файла](#формат-файла)
3.  [Компиляция](#компиляция)

## Описание

Программа использует поиск в ширину (BFS) для нахождения кратчайшего пути от заданной начальной вершины до всех остальных вершин в графе.  Граф представлен в виде списка смежности.

## Формат файла (`graph.txt`)

Входной файл `graph.txt` должен соответствовать следующему формату:
content_copy
download
Use code with caution.
Markdown
<количество_вершин>
<количество_ребер>
<вершина1> <вершина2> (ребро между вершиной1 и вершиной2)
<вершина3> <вершина4> (ребро между вершиной3 и вершиной4)
...
<начальная_вершина>

**Пояснения:**

*   **Строка 1:** Целое число, представляющее общее количество вершин в графе. Вершины пронумерованы от 0 до `количество_вершин - 1`.
*   **Строка 2:** Целое число, представляющее общее количество ребер в графе.
*   **Строки 3 до `количество_ребер + 2`:** Каждая строка представляет ребро между двумя вершинами. `вершина1` и `вершина2` - целые числа, представляющие номера вершин, соединенных ребром. Граф неориентированный, то есть ребро двунаправленное.
*   **Последняя строка:** Целое число, представляющее начальную вершину, от которой нужно рассчитать расстояния.

**Пример:**
content_copy
download
Use code with caution.
5 (5 вершин в графе)
4 (4 ребра)
0 1 (ребро между вершиной 0 и вершиной 1)
0 4 (ребро между вершиной 0 и вершиной 4)
1 2 (ребро между вершиной 1 и вершиной 2)
1 3 (ребро между вершиной 1 и вершиной 3)
4 (начальная вершина - 4)

## Компиляция

Для компиляции программы используйте компилятор C++ (например, g++) с поддержкой C++17 или более поздней версии:

```bash
g++ task_vk_c++.cpp -o graph_distance -std=c++17


#!/bin/bash

list0=""

list1=""

list2=""

list3=""

list4=""

a=$(./push_swap $list0 | wc -l)
b=$(./push_swap $list1 | wc -l)
c=$(./push_swap $list2 | wc -l)
d=$(./push_swap $list3 | wc -l)
e=$(./push_swap $list4 | wc -l)

f=$((($a + $b + $c + $d + $e) / 5))

echo "$f"

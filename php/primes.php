<?php

/**
 * @param $list: List of numbers to check for primes
 * @param $n: Maximum number to check
 */

function getPrimes(&$list, $n) {
	$i = 2;

	while ($i <= $n) {
		if ($list[$i] == 0) {
			$j = $i;
			while ($j <= $n) {
				$list[$j] = 1;
				$j += $i;
			}
		}

		$i++;
	}
}

$n = (int) 10000000;
$list = array_fill(0, $n, 0);

getPrimes($list, $n);


// run with hhvm for best results

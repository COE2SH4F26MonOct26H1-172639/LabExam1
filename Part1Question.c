/* Question: Prime number
 * Return 1 if n is prime, otherwise 0. A prime is at least 2 and has no divisors other than 1 and itself. Domain: 0 <= n <= 1000000.
 * Complete only solve; write the answer to global result.
 * Use 10-20 nonblank code lines, excluding brace-only lines.
 */
#include <stdio.h>

long result;

void solve(long n)
{
    /* TODO: implement solve here. */
}

int main(void)
{
    int passed;
    passed = 0;
    result = -999999L;
    solve(0L);
    if (result == 0L) {
        passed = passed + 1;
        printf("Test 1: PASS\n");
    } else {
        printf("Test 1: FAIL (expected %ld, got %ld)\n", 0L, result);
    }
    result = -999999L;
    solve(1L);
    if (result == 0L) {
        passed = passed + 1;
        printf("Test 2: PASS\n");
    } else {
        printf("Test 2: FAIL (expected %ld, got %ld)\n", 0L, result);
    }
    result = -999999L;
    solve(2L);
    if (result == 1L) {
        passed = passed + 1;
        printf("Test 3: PASS\n");
    } else {
        printf("Test 3: FAIL (expected %ld, got %ld)\n", 1L, result);
    }
    result = -999999L;
    solve(49L);
    if (result == 0L) {
        passed = passed + 1;
        printf("Test 4: PASS\n");
    } else {
        printf("Test 4: FAIL (expected %ld, got %ld)\n", 0L, result);
    }
    result = -999999L;
    solve(97L);
    if (result == 1L) {
        passed = passed + 1;
        printf("Test 5: PASS\n");
    } else {
        printf("Test 5: FAIL (expected %ld, got %ld)\n", 1L, result);
    }
    printf("Passed %d of 5 test cases (%d%%)\n", passed, passed * 20);
    return passed == 5 ? 0 : 1;
}

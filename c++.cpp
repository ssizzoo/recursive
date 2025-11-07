int sum_of_digits(int n) {
    // Обработка отрицательных чисел
    n = abs(n);
    // Базовый случай
    if (n == 0) {
        return 0;
    }
    // Рекурсивный случай
    return n % 10 + sum_of_digits(n / 10);
}

// Пример использования
// sum_of_digits(123) вернет 6

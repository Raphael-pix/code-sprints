const sumTwoNumbers = require('../sum_two_numbers');

test('adds 2 + 3 to equal 5', () => {
  expect(sumTwoNumbers(2, 3)).toBe(5);
});

const sum_two = require('../sum_two_numbers');

test('adds 2 + 3 to equal 5', () => {
  expect(sum_two(2, 3)).toBe(5);
});

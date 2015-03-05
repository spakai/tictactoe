lcov -c -i -d . -o .coverage.base
lcov -c -d . -o .coverage.run
lcov -d . -a .coverage.base -a .coverage.run -o .coverage.total
genhtml --no-branch-coverage -o $1 .coverage.total
rm -f .coverage.base .coverage.run .coverage.total

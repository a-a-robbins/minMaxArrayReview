repl-build: csc-150-review_template.c
	gcc -o $@ $^

.PHONY: run
run: repl-build
	./$^

.PHONY: clean

clean:
	rm -f repl-build
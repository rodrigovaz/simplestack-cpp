build: ./main

./main:
	g++ ./src/main.cpp -o main

clean:
	rm -f main

run: build
	./main

rerun: clean run

IMAGE_TAG=simplestack
dockerbuild:
	docker build -t $(IMAGE_TAG) .
	chmod +x entrypoint.sh
	mkdir -p $(PWD)/bin
	docker run -it --rm \
		-e USER_ID=1000 \
		-v $(PWD)/bin:/output_dir \
		-v $(PWD)/src:/build_dir \
		-v $(PWD)/entrypoint.sh:/entrypoint.sh \
		$(IMAGE_TAG) /entrypoint.sh
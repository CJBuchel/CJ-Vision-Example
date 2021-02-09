# CJ-Vision-Example
Example using CJ-Vision as base. With OpenCV library.

## Building

- In the dir of `CJ-Vision`

### Possible gradle tasks

- `./gradlew downloadAll` downloads all dependencies. (Fails due to bug. But does download all dependencies needed)
- `./gradlew build` builds and compiles project
- `./gradlew build -PdebugMode` builds in debug mode using pre done code, (Does not require `Coproc` folder)
- `./gradlew runVision` compiles and runs vision project on local machine.
- `./gradlew runVision -PdebugMode` compiles and runs vision project on local machine using pre done code. (Does not require `Coproc` folder)
- `./gradlew deploy` deploys project to coprocessor with hostname of `CJVision.local`. Compiles on coprocessor and runs program. (Creates service and will re run the program when it fails. Or when coprocessor starts up by default)
- `./gradlew deploy -PdebugMode` deploys debug project to coprocessor with hostname of `CJVision.local`. Compiles on coprocessor and runs program. (Creates service and will re run the program when it fails. Or when coprocessor starts up by default)
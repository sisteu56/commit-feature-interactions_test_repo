int main(int argc, char** argv) {

    bool __attribute__((feature_variable("FeatureA"))) FeatureA = argv[0] == "--A";
    bool __attribute__((feature_variable("FeatureB"))) FeatureB = argv[1] == "--B";
    bool __attribute__((feature_variable("FeatureC"))) FeatureC = argv[2] == "--C";

}
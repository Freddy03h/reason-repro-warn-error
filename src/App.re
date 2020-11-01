open ReactNative;
open ReactNativeSafeAreaContext;

[@react.component]
let make = () => {
  <SafeAreaProvider initialMetrics=initialWindowMetrics>
    <View>
      <Text>{"Hello World Reason React Native Web"->React.string}</Text>
    </View>
  </SafeAreaProvider>;
};

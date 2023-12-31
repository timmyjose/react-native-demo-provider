import * as React from 'react';

import { StyleSheet, View, Text } from 'react-native';
import { multiply, add } from 'react-native-demo-provider';

const result = multiply(3, 7);
const sum = add(3, 7);
const anotherSum = multiply(add(2, 3), add(3, 4));

export default function App() {
  return (
    <View style={styles.container}>
      <Text>Result: {result}</Text>
      <Text>Sum: {sum}</Text>
      <Text>Another Sum: {anotherSum}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
});

const DemoProvider = require('./NativeDemoProvider').default;

export function multiply(a: number, b: number): number {
  return DemoProvider.multiply(a, b);
}

export function add(a: number, b: number): number {
  return DemoProvider.add(a, b);
}

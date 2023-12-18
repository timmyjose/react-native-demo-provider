#[no_mangle]
pub extern "C" fn rust_add(x: f64, y: f64) -> f64 {
    x + y
}

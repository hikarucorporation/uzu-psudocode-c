// Function : magic_outlet_connections
// Namespace: 
// Entry    : 00586190
// Prototype: undefined8 magic_outlet_connections(long param_1)
// Body     : 00586190 - 0058619c


undefined8 magic_outlet_connections(long param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x10);
}



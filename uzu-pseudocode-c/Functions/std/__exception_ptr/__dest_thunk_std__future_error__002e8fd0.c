// Function : __dest_thunk<std::future_error>
// Namespace: std:__exception_ptr
// Entry    : 002e8fd0
// Prototype: void __dest_thunk<std::future_error>(undefined8 * param_1)
// Body     : 002e8fd0 - 002e8fd4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* void std::__exception_ptr::__dest_thunk<std::future_error>(void*) */

void __cdecl std::__exception_ptr::__dest_thunk<std::future_error>(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002e8fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



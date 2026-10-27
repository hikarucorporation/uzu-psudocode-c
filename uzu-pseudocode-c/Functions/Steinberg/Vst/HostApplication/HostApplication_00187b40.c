// Function : HostApplication
// Namespace: Steinberg:Vst:HostApplication
// Entry    : 00187b40
// Prototype: undefined HostApplication(HostApplication * this)
// Body     : 00187b40 - 00187ba4


/* Steinberg::Vst::HostApplication::HostApplication() */

void __thiscall Steinberg::Vst::HostApplication::HostApplication(HostApplication *this)

{
  PlugInterfaceSupport *pPVar1;
  PlugInterfaceSupport *this_00;
  
  *(undefined ***)this = &PTR_queryInterface_00702fb0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 1;
                    /* try { // try from 00187b62 to 00187b6b has its CatchHandler @ 00187bd0 */
  this_00 = operator_new(0x28);
                    /* try { // try from 00187b6f to 00187b76 has its CatchHandler @ 00187bc3 */
  PlugInterfaceSupport::PlugInterfaceSupport(this_00);
  pPVar1 = *(PlugInterfaceSupport **)(this + 0x10);
  if (pPVar1 != this_00) {
    if (pPVar1 != (PlugInterfaceSupport *)0x0) {
                    /* try { // try from 00187b87 to 00187b95 has its CatchHandler @ 00187bad */
      (**(code **)(*(long *)pPVar1 + 0x10))();
    }
    *(PlugInterfaceSupport **)(this + 0x10) = this_00;
    (**(code **)(*(long *)this_00 + 8))(this_00);
  }
                    /* try { // try from 00187b99 to 00187b9e has its CatchHandler @ 00187ba5 */
  (**(code **)(*(long *)this_00 + 0x10))(this_00);
  return;
}



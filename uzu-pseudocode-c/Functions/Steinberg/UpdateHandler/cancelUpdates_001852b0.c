// Function : cancelUpdates
// Namespace: Steinberg:UpdateHandler
// Entry    : 001852b0
// Prototype: undefined8 cancelUpdates(UpdateHandler * this, undefined8 * param_1)
// Body     : 001852b0 - 00185413


/* Steinberg::UpdateHandler::cancelUpdates(Steinberg::FUnknown*) */

undefined8 __thiscall
Steinberg::UpdateHandler::cancelUpdates(UpdateHandler *this,undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *local_a8;
  long lStack_a0;
  long local_98;
  long *plStack_90;
  long *local_88;
  undefined4 local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_50 [3];
  long *local_38;
  
  local_a8 = (long *)0x0;
  if (param_1 != (undefined8 *)0x0) {
    iVar3 = (**(code **)*param_1)(param_1,0x71aae8,&local_a8);
    if (iVar3 != 0) {
      (**(code **)*param_1)(param_1,0x71ab08,&local_a8);
    }
    plVar2 = local_a8;
    if (local_a8 != (long *)0x0) {
                    /* try { // try from 0018531c to 00185323 has its CatchHandler @ 00185424 */
      (**(code **)(*(long *)(this + 0x20) + 0x10))();
      local_88 = plVar2;
      local_80 = 0;
      while( true ) {
        lVar1 = *(long *)(this + 0x50);
        local_a8 = *(long **)(lVar1 + 0x3010);
        lStack_a0 = *(undefined8 *)(lVar1 + 0x3018);
        local_98 = *(undefined8 *)(lVar1 + 0x3020);
        plStack_90 = *(long **)(lVar1 + 0x3028);
        local_78 = *(long *)(lVar1 + 0x3030);
        uStack_70 = *(undefined8 *)(lVar1 + 0x3038);
        local_68 = *(undefined8 *)(lVar1 + 0x3040);
        uStack_60 = *(undefined8 *)(lVar1 + 0x3048);
                    /* try { // try from 00185384 to 00185394 has its CatchHandler @ 0018542b */
        std::
        __find_if<std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>,__gnu_cxx::__ops::_Iter_equals_val<Steinberg::Update::DeferedChange_const>>
                  ((long *)local_50,(long *)&local_a8,&local_78,(long *)&local_88);
        if (local_50[0] == *(long **)(*(long *)(this + 0x50) + 0x3030)) break;
        local_a8 = local_50[0];
        lStack_a0 = *local_38;
        local_98 = lStack_a0 + 0x200;
        plStack_90 = local_38;
                    /* try { // try from 001853d3 to 001853dd has its CatchHandler @ 00185429 */
        std::
        deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
        _M_erase(&local_78,*(long *)(this + 0x50) + 0x3000,(long *)&local_a8);
      }
                    /* try { // try from 001853f2 to 001853f4 has its CatchHandler @ 0018541c */
      (**(code **)(*(long *)(this + 0x20) + 0x18))();
                    /* try { // try from 001853fa to 001853ff has its CatchHandler @ 00185414 */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return 0;
    }
  }
  return 1;
}



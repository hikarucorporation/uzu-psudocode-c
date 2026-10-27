// Function : countDependencies
// Namespace: Steinberg:UpdateHandler
// Entry    : 00185470
// Prototype: ulong countDependencies(UpdateHandler * this, undefined8 * param_1)
// Body     : 00185470 - 00185622


/* Steinberg::UpdateHandler::countDependencies(Steinberg::FUnknown*) */

ulong __thiscall
Steinberg::UpdateHandler::countDependencies(UpdateHandler *this,undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  _Rb_tree_node_base *p_Var3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  _Rb_tree_node_base *p_Var8;
  uint uVar9;
  UpdateHandler *pUVar10;
  long *local_40;
  UpdateHandler *local_38;
  
  pUVar10 = this + 0x20;
  (**(code **)(*(long *)(this + 0x20) + 0x10))(pUVar10);
  local_40 = (long *)0x0;
  if (param_1 != (undefined8 *)0x0) {
                    /* try { // try from 001854a7 to 001854cf has its CatchHandler @ 00185633 */
    iVar1 = (**(code **)*param_1)(param_1,0x71aae8,&local_40);
    if (iVar1 != 0) {
      (**(code **)*param_1)(param_1,0x71ab08,&local_40);
    }
    if (local_40 != (long *)0x0) {
      lVar4 = ((ulong)local_40 >> 0xc & 0xff) * 0x30;
      lVar5 = *(long *)(*(long *)(this + 0x50) + 0x10 + lVar4);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        lVar2 = *(long *)(this + 0x50) + lVar4 + 8;
        lVar4 = lVar2;
        do {
          plVar7 = (long *)(lVar5 + 0x18);
          if (local_40 <= *(long **)(lVar5 + 0x20)) {
            plVar7 = (long *)(lVar5 + 0x10);
            lVar4 = lVar5;
          }
          lVar5 = *plVar7;
        } while (lVar5 != 0);
        if (lVar4 == lVar2) {
LAB_001855f7:
          uVar6 = 0;
        }
        else {
          if (local_40 < *(long **)(lVar4 + 0x20)) {
            lVar4 = lVar2;
          }
          if (lVar4 == lVar2) goto LAB_001855f7;
          uVar6 = *(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) >> 3;
        }
        if (local_40 == (long *)0x0) goto LAB_00185608;
      }
                    /* try { // try from 00185605 to 00185607 has its CatchHandler @ 00185623 */
      (**(code **)(*local_40 + 0x10))();
      goto LAB_00185608;
    }
  }
  lVar5 = *(long *)(this + 0x50);
  lVar4 = 0;
  uVar9 = 0;
  local_38 = pUVar10;
  do {
    p_Var3 = *(_Rb_tree_node_base **)(lVar5 + 0x18 + lVar4 * 0x30);
    p_Var8 = (_Rb_tree_node_base *)(lVar5 + lVar4 * 0x30 + 8);
    iVar1 = 0;
    if (p_Var3 != p_Var8) {
      iVar1 = 0;
      do {
        if (*(long *)(p_Var3 + 0x28) != *(long *)(p_Var3 + 0x30)) {
          iVar1 = iVar1 + (int)((*(long *)(p_Var3 + 0x30) - *(long *)(p_Var3 + 0x28)) + 0x7fffffff8U
                               >> 3) + 1;
        }
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var3);
      } while (p_Var3 != p_Var8);
    }
    uVar9 = uVar9 + iVar1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x100);
  uVar6 = (ulong)uVar9;
  pUVar10 = local_38;
LAB_00185608:
                    /* try { // try from 0018560b to 00185610 has its CatchHandler @ 0018562b */
  (**(code **)(*(long *)pUVar10 + 0x18))(pUVar10);
  return uVar6;
}



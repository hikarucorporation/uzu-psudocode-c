// Function : deferUpdates
// Namespace: Steinberg:UpdateHandler
// Entry    : 00184b20
// Prototype: undefined8 deferUpdates(UpdateHandler * this, undefined8 * param_1, int param_2)
// Body     : 00184b20 - 00184d0b


/* Steinberg::UpdateHandler::deferUpdates(Steinberg::FUnknown*, int) */

undefined8 __thiscall
Steinberg::UpdateHandler::deferUpdates(UpdateHandler *this,undefined8 *param_1,int param_2)

{
  UpdateHandler *pUVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_30;
  int local_28;
  
  local_30 = (long *)0x0;
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  iVar5 = (**(code **)*param_1)(param_1,0x71aae8,&local_30);
  if (iVar5 != 0) {
    (**(code **)*param_1)(param_1,0x71ab08,&local_30);
  }
  plVar4 = local_30;
  if (local_30 == (long *)0x0) {
    return 1;
  }
  pUVar1 = this + 0x20;
                    /* try { // try from 00184b87 to 00184b8c has its CatchHandler @ 00184d34 */
  (**(code **)(*(long *)(this + 0x20) + 0x10))(pUVar1);
  lVar2 = *(long *)(this + 0x50);
  lVar6 = ((ulong)plVar4 >> 0xc & 0xff) * 0x30;
  lVar9 = *(long *)(lVar2 + 0x10 + lVar6);
  if (lVar9 != 0) {
    lVar7 = lVar6 + lVar2 + 8;
    lVar6 = lVar7;
    do {
      plVar8 = (long *)(lVar9 + 0x18);
      if (plVar4 <= *(long **)(lVar9 + 0x20)) {
        plVar8 = (long *)(lVar9 + 0x10);
        lVar6 = lVar9;
      }
      lVar9 = *plVar8;
    } while (lVar9 != 0);
    if (lVar6 != lVar7) {
      if (plVar4 < *(long **)(lVar6 + 0x20)) {
        lVar6 = lVar7;
      }
      if (lVar6 != lVar7) {
        plVar8 = *(long **)(lVar2 + 0x3010);
        plVar3 = *(long **)(lVar2 + 0x3030);
        if (plVar8 != plVar3) {
          plVar10 = *(long **)(lVar2 + 0x3020);
          lVar9 = *(long *)(lVar2 + 0x3028);
          do {
            if (((long *)*plVar8 == plVar4) && ((int)plVar8[1] == param_2)) goto LAB_00184ceb;
            plVar8 = plVar8 + 2;
            if (plVar8 == plVar10) {
              plVar8 = *(long **)(lVar9 + 8);
              lVar9 = lVar9 + 8;
              plVar10 = plVar8 + 0x40;
            }
          } while (plVar8 != plVar3);
        }
        local_30 = plVar4;
        local_28 = param_2;
        if (plVar3 == (long *)(*(long *)(lVar2 + 0x3040) + -0x10)) {
                    /* try { // try from 00184ce1 to 00184cea has its CatchHandler @ 00184d0c */
          std::
          deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
          _M_push_back_aux<Steinberg::Update::DeferedChange_const&>
                    ((deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                      *)(lVar2 + 0x3000),&local_30);
        }
        else {
          *plVar3 = (long)plVar4;
          *(int *)(plVar3 + 1) = param_2;
          *(long **)(lVar2 + 0x3030) = plVar3 + 2;
        }
        goto LAB_00184ceb;
      }
    }
  }
  if (param_2 != 2) {
    local_30 = (long *)0x0;
                    /* try { // try from 00184c72 to 00184ca9 has its CatchHandler @ 00184d0e */
    (**(code **)*plVar4)(plVar4,0x71aae8,&local_30);
    if (((local_30 != (long *)0x0) && (iVar5 = (**(code **)(*local_30 + 0x10))(), iVar5 != 0)) &&
       (local_30 != (long *)0x0)) {
      (**(code **)(*local_30 + 0x68))(local_30,param_2);
    }
  }
LAB_00184ceb:
                    /* try { // try from 00184cee to 00184cf3 has its CatchHandler @ 00184d2c */
  (**(code **)(*(long *)pUVar1 + 0x18))(pUVar1);
                    /* try { // try from 00184cf9 to 00184cfe has its CatchHandler @ 00184d24 */
  (**(code **)(*plVar4 + 0x10))(plVar4);
  return 0;
}



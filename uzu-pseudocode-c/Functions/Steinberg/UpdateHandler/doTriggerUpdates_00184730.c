// Function : doTriggerUpdates
// Namespace: Steinberg:UpdateHandler
// Entry    : 00184730
// Prototype: byte doTriggerUpdates(UpdateHandler * this, undefined8 * param_1, int param_2, char param_3)
// Body     : 00184730 - 00184a9c


/* Steinberg::UpdateHandler::doTriggerUpdates(Steinberg::FUnknown*, int, bool) */

byte __thiscall
Steinberg::UpdateHandler::doTriggerUpdates
          (UpdateHandler *this,undefined8 *param_1,int param_2,char param_3)

{
  UpdateHandler *pUVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long **__dest;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  byte bVar15;
  long *local_2050;
  long **pplStack_2048;
  uint local_2040;
  undefined4 uStack_203c;
  long *local_2038 [1025];
  
  local_2038[0] = (long *)0x0;
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  __dest = local_2038;
  iVar6 = (**(code **)*param_1)(param_1,0x71aae8,__dest);
  if (iVar6 != 0) {
    (**(code **)*param_1)(param_1,0x71ab08,local_2038);
  }
  plVar5 = local_2038[0];
  if (local_2038[0] == (long *)0x0) {
    return 1;
  }
  pUVar1 = this + 0x20;
                    /* try { // try from 001847ab to 001847b7 has its CatchHandler @ 00184abb */
  (**(code **)(*(long *)(this + 0x20) + 0x10))();
  lVar10 = ((ulong)plVar5 >> 0xc & 0xff) * 0x30;
  lVar9 = *(long *)(*(long *)(this + 0x50) + 0x10 + lVar10);
  if (lVar9 != 0) {
    lVar8 = *(long *)(this + 0x50) + lVar10 + 8;
    lVar10 = lVar8;
    do {
      plVar13 = (long *)(lVar9 + 0x18);
      if (plVar5 <= *(long **)(lVar9 + 0x20)) {
        plVar13 = (long *)(lVar9 + 0x10);
        lVar10 = lVar9;
      }
      lVar9 = *plVar13;
    } while (lVar9 != 0);
    if (lVar10 != lVar8) {
      if (plVar5 < *(long **)(lVar10 + 0x20)) {
        lVar10 = lVar8;
      }
      if ((lVar10 != lVar8) && (lVar9 = *(long *)(lVar10 + 0x28), lVar9 != *(long *)(lVar10 + 0x30))
         ) {
        iVar7 = 0x400;
        __dest = local_2038;
        lVar8 = 0;
        iVar6 = 0;
        do {
          iVar14 = iVar6;
          *(undefined8 *)((long)__dest + lVar8) = *(undefined8 *)(lVar9 + lVar8);
          if (iVar7 <= iVar14 + 1) {
            if (__dest != local_2038) goto LAB_00184a17;
                    /* try { // try from 0018488e to 00184897 has its CatchHandler @ 00184abd */
            __dest = operator_new__(0x14000);
            memcpy(__dest,local_2038,lVar8 + 8);
            iVar7 = 0x2800;
          }
          lVar2 = lVar8 + lVar9;
          lVar8 = lVar8 + 8;
          iVar6 = iVar14 + 1;
        } while (lVar2 + 8 != *(long *)(lVar10 + 0x30));
        if (iVar14 + 1 == 0) {
          bVar15 = 0;
          uVar11 = 0;
        }
        else {
LAB_00184a17:
          uVar11 = iVar14 + 1;
          local_2050 = plVar5;
          lVar9 = *(long *)(this + 0x50);
          puVar4 = *(undefined8 **)(lVar9 + 0x3080);
          pplStack_2048 = __dest;
          local_2040 = uVar11;
          if (puVar4 == (undefined8 *)(*(long *)(lVar9 + 0x3090) + -0x18)) {
                    /* try { // try from 00184a77 to 00184a80 has its CatchHandler @ 00184a9d */
            std::deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>
            ::_M_push_back_aux<Steinberg::Update::UpdateData_const&>
                      ((deque<Steinberg::Update::UpdateData,std::allocator<Steinberg::Update::UpdateData>>
                        *)(lVar9 + 0x3050),&local_2050);
            bVar15 = 1;
          }
          else {
            puVar4[2] = CONCAT44(uStack_203c,uVar11);
            *puVar4 = plVar5;
            puVar4[1] = __dest;
            *(long *)(lVar9 + 0x3080) = *(long *)(lVar9 + 0x3080) + 0x18;
            bVar15 = 1;
          }
        }
        goto LAB_001848c0;
      }
    }
  }
  bVar15 = 0;
  uVar11 = 0;
LAB_001848c0:
                    /* try { // try from 001848c8 to 001848ca has its CatchHandler @ 00184ab3 */
  (**(code **)(*(long *)pUVar1 + 0x18))();
  if (0 < (int)uVar11) {
    uVar12 = 0;
    do {
      plVar13 = __dest[uVar12];
      if (plVar13 != (long *)0x0) {
                    /* try { // try from 001848f5 to 001848ff has its CatchHandler @ 00184ad5 */
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar5,param_2);
      }
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
  }
  if ((__dest != local_2038) && (__dest != (long **)0x0)) {
    operator_delete__(__dest);
  }
  if (bVar15 != 0) {
                    /* try { // try from 0018492b to 0018492d has its CatchHandler @ 00184aa7 */
    (**(code **)(*(long *)pUVar1 + 0x10))();
    lVar9 = *(long *)(this + 0x50);
    pvVar3 = *(void **)(lVar9 + 0x3080);
    if (pvVar3 == *(void **)(lVar9 + 0x3088)) {
      operator_delete(pvVar3);
      lVar10 = *(long *)(lVar9 + 0x3098);
      *(long *)(lVar9 + 0x3098) = lVar10 + -8;
      lVar10 = *(long *)(lVar10 + -8);
      *(long *)(lVar9 + 0x3088) = lVar10;
      *(long *)(lVar9 + 0x3090) = lVar10 + 0x1f8;
      lVar10 = lVar10 + 0x1e0;
    }
    else {
      lVar10 = (long)pvVar3 + -0x18;
    }
    *(long *)(lVar9 + 0x3080) = lVar10;
                    /* try { // try from 00184993 to 00184995 has its CatchHandler @ 00184a9f */
    (**(code **)(*(long *)pUVar1 + 0x18))();
  }
  if ((param_2 != 2) && (param_3 == '\0')) {
    local_2050 = (long *)0x0;
                    /* try { // try from 001849b4 to 001849eb has its CatchHandler @ 00184aa9 */
    (**(code **)*plVar5)(plVar5,0x71aae8,&local_2050);
    if ((local_2050 != (long *)0x0) &&
       ((iVar6 = (**(code **)(*local_2050 + 0x10))(), iVar6 != 0 && (local_2050 != (long *)0x0)))) {
      (**(code **)(*local_2050 + 0x68))(local_2050,param_2);
    }
  }
                    /* try { // try from 001849ef to 001849f4 has its CatchHandler @ 00184aab */
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return bVar15 ^ 1;
}



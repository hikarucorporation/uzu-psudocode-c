// Function : removeDependent
// Namespace: Steinberg:UpdateHandler
// Entry    : 00184270
// Prototype: undefined8 removeDependent(UpdateHandler * this, undefined8 * param_1, long param_2, long * param_3)
// Body     : 00184270 - 001846c5


/* Steinberg::UpdateHandler::removeDependent(Steinberg::FUnknown*, Steinberg::IDependent*, unsigned
   long&) */

undefined8 __thiscall
Steinberg::UpdateHandler::removeDependent
          (UpdateHandler *this,undefined8 *param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  _Rb_tree_node_base *p_Var8;
  long *plVar9;
  long lVar10;
  _Rb_tree_node_base *p_Var11;
  undefined8 uVar12;
  ulong uVar13;
  _Rb_tree_node_base *p_Var14;
  long *__src;
  bool bVar15;
  long lVar16;
  long *plVar17;
  _Rb_tree_node_base *p_Var18;
  long *local_40;
  UpdateHandler *local_38;
  
  *param_3 = 0;
  local_40 = (long *)0x0;
  plVar3 = local_40;
  if (param_1 != (undefined8 *)0x0) {
    iVar4 = (**(code **)*param_1)(param_1,0x71aae8,&local_40);
    plVar3 = local_40;
    if (iVar4 != 0) {
      (**(code **)*param_1)(param_1,0x71ab08,&local_40);
      plVar3 = local_40;
    }
  }
  local_40 = plVar3;
  if ((param_2 == 0) && (uVar12 = 1, plVar3 == (long *)0x0)) goto LAB_001846a7;
  local_38 = this + 0x20;
                    /* try { // try from 001842f6 to 00184301 has its CatchHandler @ 001846e6 */
  (**(code **)(*(long *)(this + 0x20) + 0x10))();
  lVar16 = *(long *)(this + 0x50);
  plVar5 = *(long **)(lVar16 + 0x3060);
  if (plVar5 != *(long **)(lVar16 + 0x3080)) {
    plVar9 = *(long **)(lVar16 + 0x3070);
    lVar10 = *(long *)(lVar16 + 0x3078);
    do {
      while( true ) {
        if (((plVar3 == (long *)0x0) || ((long *)*plVar5 == plVar3)) &&
           (uVar1 = *(uint *)(plVar5 + 2), uVar1 != 0)) {
          if (uVar1 == 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            do {
              if (*(long *)(plVar5[1] + uVar13 * 8) == param_2) {
                *(undefined8 *)(plVar5[1] + uVar13 * 8) = 0;
                lVar16 = plVar5[1];
                lVar7 = *(long *)(lVar16 + 8 + uVar13 * 8);
              }
              else {
                lVar16 = plVar5[1];
                lVar7 = *(long *)(lVar16 + 8 + uVar13 * 8);
              }
              if (lVar7 == param_2) {
                *(undefined8 *)(lVar16 + 8 + uVar13 * 8) = 0;
              }
              uVar13 = uVar13 + 2;
            } while ((uVar1 & 0xfffffffe) != uVar13);
          }
          if (((uVar1 & 1) != 0) && (*(long *)(plVar5[1] + uVar13 * 8) == param_2)) {
            *(undefined8 *)(plVar5[1] + uVar13 * 8) = 0;
          }
        }
        plVar5 = plVar5 + 3;
        if (plVar5 == plVar9) break;
        lVar16 = *(long *)(this + 0x50);
        if (plVar5 == *(long **)(lVar16 + 0x3080)) goto LAB_001843ee;
      }
      plVar5 = *(long **)(lVar10 + 8);
      lVar10 = lVar10 + 8;
      plVar9 = plVar5 + 0x3f;
      lVar16 = *(long *)(this + 0x50);
    } while (plVar5 != *(long **)(lVar16 + 0x3080));
  }
LAB_001843ee:
  if (plVar3 == (long *)0x0) {
    lVar10 = 0;
    do {
      lVar7 = lVar10 * 0x30;
      p_Var8 = *(_Rb_tree_node_base **)(lVar16 + 0x18 + lVar7);
      p_Var18 = (_Rb_tree_node_base *)(lVar16 + lVar7 + 8);
      if (p_Var8 != p_Var18) {
        do {
          plVar5 = *(long **)(p_Var8 + 0x28);
          plVar9 = *(long **)(p_Var8 + 0x30);
          if (plVar5 != plVar9) {
            do {
              while (*plVar5 == param_2) {
                lVar2 = *(long *)(p_Var8 + 0x28);
                *param_3 = (long)plVar9 - lVar2 >> 3;
                if ((long)plVar9 - lVar2 == 8) {
                  p_Var14 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var8);
                  pvVar6 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var8,p_Var18);
                  if (*(void **)((long)pvVar6 + 0x28) != (void *)0x0) {
                    operator_delete(*(void **)((long)pvVar6 + 0x28));
                  }
                  operator_delete(pvVar6);
                  plVar5 = (long *)(lVar16 + lVar7 + 0x28);
                  *plVar5 = *plVar5 + -1;
                  p_Var8 = p_Var14;
                  goto joined_r0x00184623;
                }
                plVar17 = plVar5 + 1;
                if ((plVar17 != plVar9) && ((long)plVar9 - (long)plVar17 != 0)) {
                  memmove(plVar5,plVar17,(long)plVar9 - (long)plVar17);
                  plVar9 = *(long **)(p_Var8 + 0x30);
                }
                plVar9 = plVar9 + -1;
                *(long **)(p_Var8 + 0x30) = plVar9;
                if (plVar5 == plVar9) goto LAB_00184560;
              }
              plVar5 = plVar5 + 1;
            } while (plVar5 != plVar9);
          }
LAB_00184560:
          p_Var8 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var8);
joined_r0x00184623:
        } while (p_Var8 != p_Var18);
      }
      lVar10 = lVar10 + 1;
      if (lVar10 == 0x100) goto LAB_00184696;
      lVar16 = *(long *)(this + 0x50);
    } while( true );
  }
  lVar10 = ((ulong)plVar3 >> 0xc & 0xff) * 0x30;
  p_Var8 = *(_Rb_tree_node_base **)(lVar16 + 0x10 + lVar10);
  if (p_Var8 == (_Rb_tree_node_base *)0x0) {
LAB_00184686:
                    /* try { // try from 00184689 to 00184695 has its CatchHandler @ 001846c6 */
    (**(code **)(*(long *)this + 0x98))(this,plVar3);
  }
  else {
    p_Var14 = (_Rb_tree_node_base *)(lVar16 + lVar10 + 8);
    p_Var18 = p_Var14;
    do {
      p_Var11 = p_Var8 + 0x18;
      if (plVar3 <= *(long **)(p_Var8 + 0x20)) {
        p_Var11 = p_Var8 + 0x10;
        p_Var18 = p_Var8;
      }
      p_Var8 = *(_Rb_tree_node_base **)p_Var11;
    } while (p_Var8 != (_Rb_tree_node_base *)0x0);
    if (p_Var18 == p_Var14) goto LAB_00184686;
    if (plVar3 < *(long **)(p_Var18 + 0x20)) {
      p_Var18 = p_Var14;
    }
    if (p_Var18 == p_Var14) goto LAB_00184686;
    if (param_2 == 0) {
      *param_3 = *(long *)(p_Var18 + 0x30) - *(long *)(p_Var18 + 0x28) >> 3;
      pvVar6 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var18,p_Var14);
      if (*(void **)((long)pvVar6 + 0x28) != (void *)0x0) {
        operator_delete(*(void **)((long)pvVar6 + 0x28));
      }
      operator_delete(pvVar6);
      plVar5 = (long *)(lVar16 + lVar10 + 0x28);
      *plVar5 = *plVar5 + -1;
      goto LAB_00184686;
    }
    plVar5 = *(long **)(p_Var18 + 0x28);
    plVar9 = *(long **)(p_Var18 + 0x30);
    if (plVar5 == plVar9) goto LAB_00184686;
    bVar15 = true;
    plVar17 = plVar5;
    do {
      if (*plVar17 == param_2) {
        __src = plVar17 + 1;
        if ((__src != plVar9) && ((long)plVar9 - (long)__src != 0)) {
          memmove(plVar17,__src,(long)plVar9 - (long)__src);
          plVar5 = *(long **)(p_Var18 + 0x28);
          plVar9 = *(long **)(p_Var18 + 0x30);
        }
        plVar9 = plVar9 + -1;
        *(long **)(p_Var18 + 0x30) = plVar9;
        *param_3 = *param_3 + 1;
        if (plVar5 == plVar9) {
          pvVar6 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var18,p_Var14);
          if (*(void **)((long)pvVar6 + 0x28) != (void *)0x0) {
            operator_delete(*(void **)((long)pvVar6 + 0x28));
          }
          operator_delete(pvVar6);
          plVar5 = (long *)(lVar16 + lVar10 + 0x28);
          *plVar5 = *plVar5 + -1;
          break;
        }
      }
      else {
        plVar17 = plVar17 + 1;
        bVar15 = false;
      }
    } while (plVar17 != plVar9);
    if (bVar15) goto LAB_00184686;
  }
LAB_00184696:
  uVar12 = 0;
                    /* try { // try from 001846a0 to 001846a2 has its CatchHandler @ 001846de */
  (**(code **)(*(long *)local_38 + 0x18))();
LAB_001846a7:
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 001846af to 001846b4 has its CatchHandler @ 0018470a */
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return uVar12;
}



// Function : canvas_undo_set_move
// Namespace: 
// Entry    : 005071a0
// Prototype: long * canvas_undo_set_move(long param_1, int param_2)
// Body     : 005071a0 - 005074d0


long * canvas_undo_set_move(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  plVar3 = getbytes(0x10);
  lVar8 = *(long *)(param_1 + 0x30);
  if (param_2 == 0) {
    if (lVar8 == 0) goto LAB_00507275;
    iVar6 = 0;
    lVar10 = lVar8;
    do {
      iVar6 = iVar6 + 1;
      lVar10 = *(long *)(lVar10 + 8);
    } while (lVar10 != 0);
LAB_0050724c:
    *(int *)(plVar3 + 1) = iVar6;
    if (param_2 == 0) {
      if (lVar8 != 0) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != 0);
        goto LAB_00507282;
      }
    }
    else if (lVar8 != 0) {
      lVar10 = *(long *)(param_1 + 0xc0);
      goto joined_r0x0050726d;
    }
  }
  else {
    if (lVar8 != 0) {
      if ((*(long *)(param_1 + 0xc0) != 0) &&
         (plVar5 = *(long **)(*(long *)(param_1 + 0xc0) + 0x20), plVar5 != (long *)0x0)) {
        iVar6 = 0;
        lVar10 = lVar8;
        do {
          plVar7 = plVar5;
          do {
            lVar2 = *plVar7;
            if (lVar2 == lVar10) break;
            plVar7 = (long *)plVar7[1];
          } while (plVar7 != (long *)0x0);
          iVar6 = iVar6 + (uint)(lVar2 == lVar10);
          lVar10 = *(long *)(lVar10 + 8);
        } while (lVar10 != 0);
        goto LAB_0050724c;
      }
      *(undefined4 *)(plVar3 + 1) = 0;
      lVar10 = *(long *)(param_1 + 0xc0);
joined_r0x0050726d:
      iVar6 = 0;
      if (lVar10 != 0) {
        iVar6 = 0;
        if (*(long **)(lVar10 + 0x20) != (long *)0x0) {
          iVar6 = 0;
          do {
            plVar5 = *(long **)(lVar10 + 0x20);
            do {
              lVar2 = *plVar5;
              if (lVar2 == lVar8) break;
              plVar5 = (long *)plVar5[1];
            } while (plVar5 != (long *)0x0);
            iVar6 = iVar6 + (uint)(lVar2 == lVar8);
            lVar8 = *(long *)(lVar8 + 8);
          } while (lVar8 != 0);
        }
      }
      goto LAB_00507282;
    }
LAB_00507275:
    *(undefined4 *)(plVar3 + 1) = 0;
  }
  iVar6 = 0;
LAB_00507282:
  pvVar4 = getbytes((long)iVar6 * 0xc);
  *plVar3 = (long)pvVar4;
  plVar5 = *(long **)(param_1 + 0x30);
  if (param_2 == 0) {
    if (plVar5 != (long *)0x0) {
      iVar6 = 0;
      lVar8 = 8;
      do {
        gobj_getrect(plVar5,param_1,&local_3c,&local_40,&local_34,&local_38);
        lVar10 = *plVar3;
        *(int *)(lVar10 + -8 + lVar8) = iVar6;
        iVar9 = *(int *)(param_1 + 0xec);
        *(float *)(lVar10 + -4 + lVar8) = (float)(local_3c / iVar9);
        *(float *)(lVar10 + lVar8) = (float)(local_40 / iVar9);
        plVar5 = (long *)plVar5[1];
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 0xc;
      } while (plVar5 != (long *)0x0);
    }
  }
  else if ((plVar5 != (long *)0x0) && (lVar8 = *(long *)(param_1 + 0xc0), lVar8 != 0)) {
    iVar9 = 0;
    iVar6 = 0;
    do {
      if (lVar8 != 0) {
        for (plVar7 = *(long **)(lVar8 + 0x20); plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
          if ((long *)*plVar7 == plVar5) {
            gobj_getrect(plVar5,param_1,&local_3c,&local_40,&local_34,&local_38);
            lVar8 = *plVar3;
            lVar10 = (long)iVar9;
            *(int *)(lVar8 + lVar10 * 0xc) = iVar6;
            iVar1 = *(int *)(param_1 + 0xec);
            *(float *)(lVar8 + 4 + lVar10 * 0xc) = (float)(local_3c / iVar1);
            *(float *)(lVar8 + 8 + lVar10 * 0xc) = (float)(local_40 / iVar1);
            iVar9 = iVar9 + 1;
            plVar5 = (long *)plVar5[1];
            goto joined_r0x00507386;
          }
        }
      }
      plVar5 = (long *)plVar5[1];
joined_r0x00507386:
      if (plVar5 == (long *)0x0) break;
      iVar6 = iVar6 + 1;
      lVar8 = *(long *)(param_1 + 0xc0);
    } while( true );
  }
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined4 *)(**(long **)(*plVar5 + 0x48) + 0x40) = 1;
  return plVar3;
}



// Function : binbuf_getpos
// Namespace: 
// Entry    : 00513190
// Prototype: char binbuf_getpos(undefined4 * param_1, int * param_2, int * param_3, long * param_4)
// Body     : 00513190 - 005134c2


char binbuf_getpos(undefined4 *param_1,int *param_2,int *param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  int local_54;
  
  piVar2 = (int *)binbuf_getvec((long)param_1);
  iVar1 = binbuf_getnatom(param_1);
  if (iVar1 < 3) {
    return '\0';
  }
  lVar3 = atom_getsymbol(piVar2);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  if (lVar3 == *plVar4 + 0x108) {
    puVar5 = (undefined8 *)atom_getsymbol(piVar2 + 4);
    puVar6 = gensym("canvas");
    if (puVar5 == puVar6) {
      iVar9 = 0;
      local_54 = 0;
      piVar7 = piVar2;
      iVar8 = iVar1;
      iVar10 = iVar1;
      do {
        iVar12 = iVar10;
        piVar11 = piVar7;
        iVar10 = -1;
        piVar7 = piVar11;
        do {
          piVar7 = piVar7 + 4;
          if (iVar12 + iVar10 == -1) {
            iVar10 = iVar12;
            if (iVar12 != 0) goto LAB_005133cc;
            piVar11 = piVar2;
            iVar12 = iVar8;
            goto LAB_0051322d;
          }
          iVar10 = iVar10 + -1;
        } while (*piVar7 != 4);
        iVar10 = -iVar10;
LAB_005133cc:
        if (1 < iVar10) {
          puVar5 = (undefined8 *)atom_getsymbol(piVar11 + 4);
          puVar6 = gensym("restore");
          if (puVar5 == puVar6) {
            lVar3 = atom_getsymbol(piVar11);
            plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
            local_54 = local_54 - (uint)(lVar3 == *plVar4 + 0x120);
          }
          puVar5 = (undefined8 *)atom_getsymbol(piVar11 + 4);
          puVar6 = gensym("canvas");
          if (puVar5 == puVar6) {
            lVar3 = atom_getsymbol(piVar11);
            plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
            local_54 = local_54 + (uint)(lVar3 == *plVar4 + 0x108);
          }
        }
        if (iVar12 - iVar10 < 0) {
          return '\0';
        }
        iVar9 = iVar9 + iVar10;
        piVar2 = piVar11;
        piVar7 = piVar11 + (long)iVar10 * 4;
        iVar8 = iVar12;
        iVar10 = iVar12 - iVar10;
      } while (0 < local_54);
      goto LAB_0051322d;
    }
  }
  iVar9 = 0;
  piVar11 = piVar2;
  iVar12 = iVar1;
LAB_0051322d:
  if (3 < iVar12) {
    lVar3 = atom_getsymbol(piVar11);
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    if (lVar3 == *plVar4 + 0x120) {
      puVar5 = (undefined8 *)atom_getsymbol(piVar11 + 4);
      puVar6 = gensym("restore");
      if ((((puVar6 != puVar5) && (puVar6 = gensym("obj"), puVar6 != puVar5)) &&
          (puVar6 = gensym("msg"), puVar6 != puVar5)) &&
         (((puVar6 = gensym("text"), puVar6 != puVar5 &&
           (puVar6 = gensym("floatatom"), puVar6 != puVar5)) &&
          ((puVar6 = gensym("listbox"), puVar6 != puVar5 &&
           (puVar6 = gensym("symbolatom"), puVar6 != puVar5)))))) {
        return '\0';
      }
      if (param_2 != (int *)0x0) {
        fVar13 = (float)atom_getfloat(piVar11 + 8);
        *param_2 = (int)fVar13;
      }
      if (param_3 != (int *)0x0) {
        fVar13 = (float)atom_getfloat(piVar11 + 0xc);
        *param_3 = (int)fVar13;
      }
      if (param_4 != (long *)0x0) {
        *param_4 = (long)puVar5;
      }
      iVar8 = iVar12 + iVar9;
      do {
        iVar9 = iVar9 + 1;
        if (*piVar11 == 4) goto LAB_0051336a;
        iVar12 = iVar12 + -1;
        piVar11 = piVar11 + 4;
      } while (iVar12 != 0);
      iVar9 = iVar8;
LAB_0051336a:
      return (iVar9 < iVar1) + '\x01';
    }
  }
  return '\0';
}



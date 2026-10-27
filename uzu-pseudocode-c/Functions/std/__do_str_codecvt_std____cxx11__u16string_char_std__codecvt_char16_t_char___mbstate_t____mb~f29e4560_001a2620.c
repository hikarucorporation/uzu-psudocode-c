// Function : __do_str_codecvt<std::__cxx11::u16string,char,std::codecvt<char16_t,char,__mbstate_t>,__mbstate_t,std::codecvt_base::result(std::codecvt<char16_t,char,__mbstate_t>::*)(__mbstate_t&,char_const*,char_const*,char_const*&,char16_t*,char16_t*,char16_t*&)const>
// Namespace: std
// Entry    : 001a2620
// Prototype: undefined8 __do_str_codecvt<std::__cxx11::u16string,char,std::codecvt<char16_t,char,__mbstate_t>,__mbstate_t,std::codecvt_base::result(std::codecvt<char16_t,char,__mbstate_t>::*)(__mbstate_t&,char_const*,char_const*,char_const*&,char16_t*,char16_t*,char16_t*&)const>(long param_1, long param_2, u16string * param_3, long * param_4, undefined8 param_5, long * param_6, undefined * param_7, long param_8)
// Body     : 001a2620 - 001a2901


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool std::__do_str_codecvt<std::__cxx11::u16string, char, std::codecvt<char16_t, char,
   __mbstate_t>, __mbstate_t, std::codecvt_base::result (std::codecvt<char16_t, char,
   __mbstate_t>::*)(__mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*,
   char16_t*&) const>(char const*, char const*, std::__cxx11::u16string&, std::codecvt<char16_t,
   char, __mbstate_t> const&, __mbstate_t&, unsigned long&, std::codecvt_base::result
   (std::codecvt<char16_t, char, __mbstate_t>::*)(__mbstate_t&, char const*, char const*, char
   const*&, char16_t*, char16_t*, char16_t*&) const) */

undefined1 * __cdecl
std::
__do_str_codecvt<std::__cxx11::u16string,char,std::codecvt<char16_t,char,__mbstate_t>,__mbstate_t,std::codecvt_base::result(std::codecvt<char16_t,char,__mbstate_t>::*)(__mbstate_t&,char_const*,char_const*,char_const*&,char16_t*,char16_t*,char16_t*&)const>
          (long param_1,long param_2,u16string *param_3,long *param_4,undefined8 param_5,
          long *param_6,undefined *param_7,long param_8)

{
  undefined2 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  u16string *puVar6;
  code *pcVar7;
  undefined1 *puVar8;
  ulong uVar9;
  bool bVar10;
  long local_78;
  u16string *local_70;
  long *local_68;
  code *local_60;
  u16string *local_58;
  long local_50;
  long *local_48;
  long local_40;
  undefined8 local_38;
  
  if (param_1 == param_2) {
    *(undefined8 *)(param_3 + 8) = 0;
    puVar1 = *(undefined2 **)param_3;
    *puVar1 = 0;
    *param_6 = 0;
    return (undefined1 *)CONCAT71((int7)((ulong)puVar1 >> 8),1);
  }
  local_60 = (code *)param_7;
  local_68 = (long *)(param_8 + (long)param_4);
  local_78 = param_1;
  local_48 = param_6;
  local_38 = param_5;
  iVar2 = (**(code **)(*param_4 + 0x40))(param_4);
  local_40 = (long)(iVar2 + 1);
  local_70 = param_3 + 0x10;
  puVar5 = *(undefined1 **)(param_3 + 8);
  puVar8 = (undefined1 *)0x0;
  local_50 = param_1;
  do {
    uVar9 = (param_2 - param_1) * local_40;
    puVar4 = puVar5 + uVar9;
    if (puVar5 < puVar4) {
      if (0x1fffffffffffffffU - (long)puVar5 < uVar9) goto LAB_001a28f6;
      puVar6 = *(u16string **)param_3;
      if (puVar6 == local_70) {
        if (&DAT_00000008 <= puVar4) goto LAB_001a2715;
      }
      else if (*(undefined1 **)(param_3 + 0x10) < puVar4) {
LAB_001a2715:
        __cxx11::u16string::_M_mutate(param_3,(long)puVar5,0,(undefined2 *)0x0,uVar9);
        puVar6 = *(u16string **)param_3;
      }
      if (uVar9 != 0) {
        if (uVar9 == 1) {
          *(undefined2 *)(puVar6 + (long)puVar5 * 2) = 0;
        }
        else {
          memset(puVar6 + (long)puVar5 * 2,0,uVar9 * 2);
        }
      }
      *(undefined1 **)(param_3 + 8) = puVar4;
LAB_001a2771:
      *(undefined2 *)(puVar6 + (long)puVar4 * 2) = 0;
      puVar5 = puVar4;
    }
    else {
      if (puVar4 < puVar5) {
        *(undefined1 **)(param_3 + 8) = puVar4;
        puVar6 = *(u16string **)param_3;
        goto LAB_001a2771;
      }
      puVar6 = *(u16string **)param_3;
    }
    local_58 = puVar6 + (long)puVar8 * 2;
    pcVar7 = local_60;
    if (((ulong)local_60 & 1) != 0) {
      pcVar7 = *(code **)(local_60 + *local_68 + -1);
    }
    lVar3 = (*pcVar7)(local_68,local_38,local_78,param_2,&local_78,local_58,
                      puVar6 + (long)puVar5 * 2,&local_58);
    puVar6 = *(u16string **)param_3;
    puVar8 = (undefined1 *)((long)local_58 - (long)puVar6 >> 1);
    if (((int)lVar3 != 1) || (local_78 == param_2)) {
      if ((int)lVar3 == 2) {
        puVar4 = (undefined1 *)0x0;
        goto LAB_001a28da;
      }
      puVar5 = *(undefined1 **)(param_3 + 8);
      bVar10 = puVar8 < puVar5;
      uVar9 = (long)puVar8 - (long)puVar5;
      if (bVar10 || uVar9 == 0) goto LAB_001a28b1;
      goto LAB_001a2810;
    }
    puVar5 = *(undefined1 **)(param_3 + 8);
    lVar3 = (long)puVar5 - (long)puVar8;
    param_1 = local_78;
  } while (lVar3 < local_40);
  bVar10 = puVar8 < puVar5;
  uVar9 = (long)puVar8 - (long)puVar5;
  if (bVar10 || uVar9 == 0) {
LAB_001a28b1:
    puVar4 = (undefined1 *)CONCAT71((int7)((ulong)lVar3 >> 8),1);
    if (!bVar10) goto LAB_001a28da;
  }
  else {
LAB_001a2810:
    if (0x1fffffffffffffffU - (long)puVar5 < uVar9) {
LAB_001a28f6:
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_replace_aux");
    }
    puVar4 = (undefined1 *)0x0;
    if (puVar6 == local_70) {
      if (&DAT_00000008 <= puVar8) goto LAB_001a2871;
    }
    else {
      puVar4 = *(undefined1 **)(param_3 + 0x10);
      if (puVar4 < puVar8) {
LAB_001a2871:
        puVar4 = (undefined1 *)
                 __cxx11::u16string::_M_mutate(param_3,(long)puVar5,0,(undefined2 *)0x0,uVar9);
        puVar6 = *(u16string **)param_3;
      }
    }
    if (uVar9 != 0) {
      if (uVar9 == 1) {
        *(undefined2 *)(puVar6 + (long)puVar5 * 2) = 0;
      }
      else {
        puVar4 = memset(puVar6 + (long)puVar5 * 2,0,uVar9 * 2);
      }
    }
  }
  *(undefined1 **)(param_3 + 8) = puVar8;
  *(undefined2 *)(puVar6 + (long)puVar8 * 2) = 0;
  puVar4 = (undefined1 *)CONCAT71((int7)((ulong)puVar4 >> 8),1);
LAB_001a28da:
  *local_48 = local_78 - local_50;
  return puVar4;
}



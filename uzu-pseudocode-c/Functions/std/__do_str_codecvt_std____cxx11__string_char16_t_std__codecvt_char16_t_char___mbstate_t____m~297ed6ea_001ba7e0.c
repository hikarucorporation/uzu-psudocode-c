// Function : __do_str_codecvt<std::__cxx11::string,char16_t,std::codecvt<char16_t,char,__mbstate_t>,__mbstate_t,std::codecvt_base::result(std::codecvt<char16_t,char,__mbstate_t>::*)(__mbstate_t&,char16_t_const*,char16_t_const*,char16_t_const*&,char*,char*,char*&)const>
// Namespace: std
// Entry    : 001ba7e0
// Prototype: undefined8 __do_str_codecvt<std::__cxx11::string,char16_t,std::codecvt<char16_t,char,__mbstate_t>,__mbstate_t,std::codecvt_base::result(std::codecvt<char16_t,char,__mbstate_t>::*)(__mbstate_t&,char16_t_const*,char16_t_const*,char16_t_const*&,char*,char*,char*&)const>(long param_1, long param_2, long * param_3, long * param_4, undefined8 param_5, long * param_6, undefined * param_7, long param_8)
// Body     : 001ba7e0 - 001ba9d5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool std::__do_str_codecvt<std::__cxx11::string, char16_t, std::codecvt<char16_t, char,
   __mbstate_t>, __mbstate_t, std::codecvt_base::result (std::codecvt<char16_t, char,
   __mbstate_t>::*)(__mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*,
   char*&) const>(char16_t const*, char16_t const*, std::__cxx11::string&, std::codecvt<char16_t,
   char, __mbstate_t> const&, __mbstate_t&, unsigned long&, std::codecvt_base::result
   (std::codecvt<char16_t, char, __mbstate_t>::*)(__mbstate_t&, char16_t const*, char16_t const*,
   char16_t const*&, char*, char*, char*&) const) */

undefined8 __cdecl
std::
__do_str_codecvt<std::__cxx11::string,char16_t,std::codecvt<char16_t,char,__mbstate_t>,__mbstate_t,std::codecvt_base::result(std::codecvt<char16_t,char,__mbstate_t>::*)(__mbstate_t&,char16_t_const*,char16_t_const*,char16_t_const*&,char*,char*,char*&)const>
          (long param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,long *param_6,
          undefined *param_7,long param_8)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long local_68;
  long local_60;
  long local_58;
  code *local_50;
  undefined8 local_48;
  long local_40;
  long *local_38;
  
  if (param_1 == param_2) {
    param_3[1] = 0;
    puVar1 = (undefined1 *)*param_3;
    *puVar1 = 0;
    *param_6 = 0;
    return CONCAT71((int7)((ulong)puVar1 >> 8),1);
  }
  plVar7 = (long *)(param_8 + (long)param_4);
  local_68 = param_1;
  local_48 = param_5;
  iVar2 = (**(code **)(*param_4 + 0x40))(param_4);
  lVar4 = (long)(iVar2 + 1);
  lVar5 = param_3[1];
  local_50 = (code *)param_7;
  local_58 = lVar4;
  local_40 = param_1;
  local_38 = param_6;
  if (((ulong)param_7 & 1) == 0) {
    lVar8 = 0;
    do {
      std::__cxx11::string::resize
                ((ulong)param_3,(char)(param_2 - param_1 >> 1) * (char)(iVar2 + 1) + (char)lVar5);
      local_60 = lVar8 + *param_3;
      iVar3 = (*local_50)(plVar7,local_48,local_68,param_2,&local_68,local_60,*param_3 + param_3[1],
                          &local_60);
      lVar8 = local_60 - *param_3;
      if ((iVar3 != 1) || (local_68 == param_2)) goto LAB_001ba99b;
      lVar5 = param_3[1];
      param_1 = local_68;
    } while (lVar5 - lVar8 < lVar4);
  }
  else {
    lVar8 = 0;
    do {
      std::__cxx11::string::resize
                ((ulong)param_3,(char)(param_2 - param_1 >> 1) * (char)local_58 + (char)lVar5);
      local_60 = lVar8 + *param_3;
      iVar3 = (**(code **)(local_50 + *plVar7 + -1))
                        (plVar7,local_48,local_68,param_2,&local_68,local_60,*param_3 + param_3[1],
                         &local_60);
      lVar8 = local_60 - *param_3;
      if ((iVar3 != 1) || (local_68 == param_2)) goto LAB_001ba99b;
      lVar5 = param_3[1];
      param_1 = local_68;
    } while (lVar5 - lVar8 < local_58);
  }
LAB_001ba9a4:
  uVar6 = std::__cxx11::string::resize((ulong)param_3,(char)lVar8);
  uVar6 = CONCAT71((int7)((ulong)uVar6 >> 8),1);
LAB_001ba9b7:
  *local_38 = local_68 - local_40 >> 1;
  return uVar6;
LAB_001ba99b:
  if (iVar3 == 2) {
    uVar6 = 0;
    goto LAB_001ba9b7;
  }
  goto LAB_001ba9a4;
}



// Function : hb_shape_plan_create2
// Namespace: 
// Entry    : 00417380
// Prototype: undefined4 * hb_shape_plan_create2(undefined1 * param_1, int * param_2, void * param_3, uint param_4, long param_5, uint param_6)
// Body     : 00417380 - 0041748b


undefined4 *
hb_shape_plan_create2
          (undefined1 *param_1,int *param_2,void *param_3,uint param_4,long param_5,uint param_6)

{
  int iVar1;
  undefined4 *__ptr;
  undefined8 uVar2;
  
  if ((*param_2 != 0) && (__ptr = calloc(1,0x110), __ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    *(undefined8 *)(__ptr + 2) = 0;
    if (param_1 == (undefined1 *)0x0) {
      param_1 = _hb_Null_hb_face_t;
      iVar1 = _hb_Null_hb_face_t._4_4_;
    }
    else {
      iVar1 = *(int *)(param_1 + 4);
    }
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 4) = 0;
    }
    *(undefined1 **)(__ptr + 4) = param_1;
    uVar2 = hb_shape_plan_key_t::init
                      ((undefined8 *)(__ptr + 6),'\x01',(long)param_1,(undefined8 *)param_2,param_3,
                       param_4,param_5,param_6);
    if ((char)uVar2 != '\0') {
      uVar2 = hb_ot_shape_plan_t::init0
                        ((hb_ot_shape_plan_t *)(__ptr + 0x18),(long)param_1,__ptr + 6,param_2);
      if ((char)uVar2 != '\0') {
        return __ptr;
      }
      free(*(void **)(__ptr + 0xe));
      *(undefined8 *)(__ptr + 0xe) = 0;
    }
    free(__ptr);
  }
  return &_hb_NullPool;
}



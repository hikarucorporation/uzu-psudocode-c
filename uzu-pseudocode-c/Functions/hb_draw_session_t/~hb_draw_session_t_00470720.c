// Function : ~hb_draw_session_t
// Namespace: hb_draw_session_t
// Entry    : 00470720
// Prototype: undefined ~hb_draw_session_t(hb_draw_session_t * this)
// Body     : 00470720 - 004707a5


/* hb_draw_session_t::~hb_draw_session_t() */

void __thiscall hb_draw_session_t::~hb_draw_session_t(hb_draw_session_t *this)

{
  hb_draw_session_t *phVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  phVar1 = this + 0x18;
  if (*(int *)(this + 0x18) == 0) goto LAB_00470791;
  lVar2 = *(long *)(this + 8);
  uVar3 = *(undefined8 *)(this + 0x10);
  if ((*(float *)(this + 0x1c) != *(float *)(this + 0x24)) ||
     (NAN(*(float *)(this + 0x1c)) || NAN(*(float *)(this + 0x24)))) {
LAB_00470751:
    if (*(long *)(lVar2 + 0x38) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + 8);
    }
                    /* try { // try from 00470766 to 00470790 has its CatchHandler @ 004707a6 */
    (**(code **)(lVar2 + 0x18))(lVar2,uVar3,phVar1,uVar4);
  }
  else if ((*(float *)(this + 0x20) != *(float *)(this + 0x28)) ||
          (NAN(*(float *)(this + 0x20)) || NAN(*(float *)(this + 0x28)))) goto LAB_00470751;
  if (*(long *)(lVar2 + 0x38) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x20);
  }
  (**(code **)(lVar2 + 0x30))(lVar2,uVar3,phVar1,uVar4);
LAB_00470791:
  *(undefined8 *)phVar1 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



// generated by Fast Light User Interface Designer (fluid) version 1.0011

#include "HelpDialog.h"

inline void HelpDialog::cb_view__i(HelpView*, void*) {
  if (view_->changed())
{
  index_ ++;

  if (index_ >= 100)
  {
    memcpy(line_, line_ + 10, sizeof(line_[0]) * 90);
    memcpy(file_, file_ + 10, sizeof(file_[0]) * 90);
    index_ -= 10;
  }

  max_ = index_;

  strcpy(file_[index_], view_->filename());
  line_[index_] = view_->topline();

  if (index_ > 0)
    back_->activate();
  else
    back_->deactivate();

  forward_->deactivate();
  window_->label(view_->title());
}
else if (view_->filename())
{
  strncpy(file_[index_], view_->filename(), 255);
  file_[index_][255] = '\0';
  line_[index_] = view_->topline();
};
}
void HelpDialog::cb_view_(HelpView* o, void* v) {
  ((HelpDialog*)(o->parent()->user_data()))->cb_view__i(o,v);
}

inline void HelpDialog::cb_Close_i(Fl_Button*, void*) {
  window_->hide();
}
void HelpDialog::cb_Close(Fl_Button* o, void* v) {
  ((HelpDialog*)(o->parent()->user_data()))->cb_Close_i(o,v);
}

inline void HelpDialog::cb_back__i(Fl_Button*, void*) {
  if (index_ > 0)
  index_ --;

if (index_ == 0)
  back_->deactivate();

forward_->activate();

if (strcmp(view_->filename(), file_[index_]) != 0)
  view_->load(file_[index_]);

view_->topline(line_[index_]);
}
void HelpDialog::cb_back_(Fl_Button* o, void* v) {
  ((HelpDialog*)(o->parent()->user_data()))->cb_back__i(o,v);
}

inline void HelpDialog::cb_forward__i(Fl_Button*, void*) {
  if (index_ < max_)
  index_ ++;

if (index_ >= max_)
  forward_->deactivate();

back_->activate();

if (strcmp(view_->filename(), file_[index_]) != 0)
  view_->load(file_[index_]);

view_->topline(line_[index_]);
}
void HelpDialog::cb_forward_(Fl_Button* o, void* v) {
  ((HelpDialog*)(o->parent()->user_data()))->cb_forward__i(o,v);
}

inline void HelpDialog::cb_smaller__i(Fl_Button*, void*) {
  if (view_->textsize() > 8)
  view_->textsize(view_->textsize() - 2);

if (view_->textsize() <= 8)
  smaller_->deactivate();
larger_->activate();
}
void HelpDialog::cb_smaller_(Fl_Button* o, void* v) {
  ((HelpDialog*)(o->parent()->user_data()))->cb_smaller__i(o,v);
}

inline void HelpDialog::cb_larger__i(Fl_Button*, void*) {
  if (view_->textsize() < 18)
  view_->textsize(view_->textsize() + 2);

if (view_->textsize() >= 18)
  larger_->deactivate();
smaller_->activate();
}
void HelpDialog::cb_larger_(Fl_Button* o, void* v) {
  ((HelpDialog*)(o->parent()->user_data()))->cb_larger__i(o,v);
}

HelpDialog::HelpDialog() {
  Fl_Window* w;
  { Fl_Window* o = window_ = new Fl_Window(530, 385, "Help Dialog");
    w = o;
    o->user_data((void*)(this));
    { HelpView* o = view_ = new HelpView(10, 10, 510, 330);
      o->box(FL_DOWN_BOX);
      o->callback((Fl_Callback*)cb_view_);
      o->end();
      Fl_Group::current()->resizable(o);
    }
    { Fl_Button* o = new Fl_Button(425, 350, 95, 25, "Close");
      o->callback((Fl_Callback*)cb_Close);
    }
    { Fl_Button* o = back_ = new Fl_Button(365, 350, 25, 25, "@<-");
      o->shortcut(0xff51);
      o->labeltype(FL_SYMBOL_LABEL);
      o->labelcolor(2);
      o->callback((Fl_Callback*)cb_back_);
    }
    { Fl_Button* o = forward_ = new Fl_Button(395, 350, 25, 25, "@->");
      o->shortcut(0xff53);
      o->labeltype(FL_SYMBOL_LABEL);
      o->labelcolor(2);
      o->callback((Fl_Callback*)cb_forward_);
    }
    { Fl_Button* o = smaller_ = new Fl_Button(305, 350, 25, 25, "F");
      o->labelfont(1);
      o->labelsize(10);
      o->callback((Fl_Callback*)cb_smaller_);
    }
    { Fl_Button* o = larger_ = new Fl_Button(335, 350, 25, 25, "F");
      o->labelfont(1);
      o->labelsize(16);
      o->callback((Fl_Callback*)cb_larger_);
    }
    o->end();
  }
  back_->deactivate();
forward_->deactivate();

index_ = -1;
max_  = 0;
}

int HelpDialog::h() {
  return (window_->h());
}

void HelpDialog::hide() {
  window_->hide();
}

void HelpDialog::load(const char *f) {
  view_->set_changed();
view_->load(f);
window_->label(view_->title());
}

void HelpDialog::position(int xx, int yy) {
  window_->position(xx, yy);
}

void HelpDialog::resize(int xx, int yy, int ww, int hh) {
  window_->resize(xx, yy, ww, hh);
}

void HelpDialog::show() {
  window_->show();
}

void HelpDialog::textsize(uchar s) {
  view_->textsize(s);

if (s <= 8)
  smaller_->deactivate();
else
  smaller_->activate();

if (s >= 18)
  larger_->deactivate();
else
  larger_->activate();
}

uchar HelpDialog::textsize() {
  return (view_->textsize());
}

void HelpDialog::topline(const char *n) {
  view_->topline(n);
}

void HelpDialog::topline(int n) {
  view_->topline(n);
}

int HelpDialog::visible() {
  return (window_->visible());
}

int HelpDialog::w() {
  return (window_->w());
}

int HelpDialog::x() {
  return (window_->x());
}

int HelpDialog::y() {
  return (window_->y());
}

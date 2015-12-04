#include "structs.h"

void add_lecture(SemesterData *sd, int lectIndex, int day, int period, int roomId, int courseId);

int teacher_has_offtime(SemesterData *sd, Teacher *teacher, int dayId, int periodId);

int get_students_on_course(SemesterData *sd, Course* course);
int get_amount_of_lectures(SemesterData *sd);

const char* get_name_of_period(int periodId);
const char* get_name_of_day(int dayId);
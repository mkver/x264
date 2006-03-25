#ifndef __X264_GTK_ENCODE_PRIVATE_H__
#define __X264_GTK_ENCODE_PRIVATE_H__


#define __UNUSED__ __attribute__((unused))


typedef struct X264_Thread_Data_ X264_Thread_Data;
typedef struct X264_Pipe_Data_ X264_Pipe_Data;

struct X264_Thread_Data_
{
  GtkWidget *current_video_frame;
  GtkWidget *video_data;
  GtkWidget *video_rendering_rate;
  GtkWidget *time_elapsed;
  GtkWidget *time_remaining;
  GtkWidget *progress;

  GtkWidget *dialog;
  GtkWidget *button;

  x264_param_t *param;
  gchar        *file_input;
  gchar        *file_output;
  gint          container;

  /* file descriptors */
  GIOChannel *io_read;  /* use it with read */
  GIOChannel *io_write; /* use it with write */
};

struct X264_Pipe_Data_ 
{
  int     frame;
  int     frame_total;
  int     file;
  int64_t elapsed;
};


#endif /* __X264_GTK_ENCODE_PRIVATE_H__ */

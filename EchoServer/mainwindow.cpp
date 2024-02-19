#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"
#include "Polim.h"
#include<QTimer>
#include <QDebug>
#include <QHostAddress>
#include <QMessageBox>
#include <QElapsedTimer>
colors a;
void MainWindow::tooo(QString g){
if(g=="X"){
QMessageBox::warning(this,"Game Over", "X win");
}else
QMessageBox::warning(this,"Game Over", "O win");

}
void MainWindow::touch(){
if(ui->pushButton_3->text()==ui->pushButton_4->text()&& ui->pushButton_5->text()==ui->pushButton_3->text())
{
tooo(ui->pushButton_3->text());
}
if(ui->pushButton_10->text()==ui->pushButton_6->text()&& ui->pushButton_12->text()==ui->pushButton_6->text())
{tooo(ui->pushButton_12->text());
}
if(ui->pushButton_7->text()==ui->pushButton_9->text()&& ui->pushButton_8->text()==ui->pushButton_9->text())
{
tooo(ui->pushButton_9->text());

}
if(ui->pushButton_3->text()==ui->pushButton_6->text()&& ui->pushButton_9->text()==ui->pushButton_3->text())
{tooo(ui->pushButton_9->text());}
if(ui->pushButton_4->text()==ui->pushButton_10->text()&& ui->pushButton_7->text()==ui->pushButton_4->text())
{tooo(ui->pushButton_4->text());}
if(ui->pushButton_5->text()==ui->pushButton_12->text()&& ui->pushButton_8->text()==ui->pushButton_12->text())
{tooo(ui->pushButton_5->text());}
if(ui->pushButton_3->text()==ui->pushButton_10->text()&& ui->pushButton_3->text()==ui->pushButton_8->text())
{tooo(ui->pushButton_3->text());}
if(ui->pushButton_9->text()==ui->pushButton_5->text()&& ui->pushButton_10->text()==ui->pushButton_9->text())
{tooo(ui->pushButton_9->text());}
}

void MainWindow::wait( int ms ) {
   QElapsedTimer timer;
   timer.start();

   while ( timer.elapsed() < ms )
       QCoreApplication::processEvents();
}

bool hitt = false;
int r = 0;
//int mas[9] = {0};
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _socket(this)
{
    ui->setupUi(this);



    l1();
    //_socket.connectToHost(QHostAddress("26.60.203.37"), 6000);
    //connect(&_socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
   // onReadyRead();

ui->pushButton_3->hide();
ui->pushButton_4->hide();
ui->pushButton_5->hide();

ui->pushButton_6->hide();
ui->pushButton_7->hide();
ui->pushButton_8->hide();
ui->pushButton_9->hide();
ui->pushButton_10->hide();
ui->pushButton_11->hide();
ui->pushButton_12->hide();
ui->pushButton_3->setEnabled(false);
ui->pushButton_4->setEnabled(false);
ui->pushButton_5->setEnabled(false);
ui->pushButton_6->setEnabled(false);
ui->pushButton_7->setEnabled(false);
ui->pushButton_8->setEnabled(false);
ui->pushButton_9->setEnabled(false);
ui->pushButton_10->setEnabled(false);
ui->pushButton_11->setEnabled(false);
ui->pushButton_12->setEnabled(false);


}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::onReadyRead()
{
    QByteArray datas = _socket.readAll();
   // qDebug() << datas << "1";
   // _socket.write(QByteArray("ok !\n"));
    if((QString(datas))!=""){
        ui->label->setText(QString(datas));
         qDebug() << datas << "1";
    }
if((QString(datas))=="123"){
    if(init2 == true)
        p = 0;

    ui->pushButton_3->show();
    ui->pushButton_4->show();
    ui->pushButton_5->show();

    ui->pushButton_6->show();
    ui->pushButton_7->show();
    ui->pushButton_8->show();
    ui->pushButton_9->show();
    ui->pushButton_10->show();
    ui->pushButton_11->show();
    ui->pushButton_12->show();

polim*color=&a;
color->setcolor(55,55,255);
QString blue="background-color:rgb("+QString::number(color->get_r())+","+QString::number(color->get_g())+","+QString::number(color->get_b())+");";
ui->pushButton_11->setStyleSheet(blue);
_socket.write(QByteArray("321"));


}
//qDebug() << 111;

}

void MainWindow::on_pushButton_clicked()
{
    QString k;
    k=ui->lineEdit->text();
    _socket.connectToHost(QHostAddress (k), 6000);
    connect(&_socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
 onReadyRead();
}



void MainWindow::l1(){
  //  qDebug() << p;
    if(k == true){
            ui->pushButton_3->setEnabled(true);
            ui->pushButton_4->setEnabled(true);
            ui->pushButton_5->setEnabled(true);
            ui->pushButton_6->setEnabled(true);
            ui->pushButton_7->setEnabled(true);
            ui->pushButton_8->setEnabled(true);
            ui->pushButton_9->setEnabled(true);
            ui->pushButton_10->setEnabled(true);
            ui->pushButton_12->setEnabled(true);
            k = false;
            polim*color=&a;
            color->setcolor(255,156,90);
            QString orange="background-color:rgb("+QString::number(color->get_r())+","+QString::number(color->get_g())+","+QString::number(color->get_b())+");";
            ui->pushButton_11->setStyleSheet(orange);
    }
    if(hit!=0){


        if(mas[0] == 0)
        ui->pushButton_3->setEnabled(true);
        if(mas[1] == 0)
        ui->pushButton_4->setEnabled(true);
        if(mas[2] == 0)
        ui->pushButton_5->setEnabled(true);
        if(mas[3] == 0)
        ui->pushButton_6->setEnabled(true);
        if(mas[4] == 0)
        ui->pushButton_7->setEnabled(true);
        if(mas[5] == 0)
        ui->pushButton_8->setEnabled(true);
        if(mas[6] == 0)
        ui->pushButton_9->setEnabled(true);
        if(mas[7] == 0)
        ui->pushButton_10->setEnabled(true);
       if(mas[8] == 0)
        ui->pushButton_12->setEnabled(true);
       polim*color=&a;
       color->setcolor(255,156,90);
       QString orange="background-color:rgb("+QString::number(color->get_r())+","+QString::number(color->get_g())+","+QString::number(color->get_b())+");";
       ui->pushButton_11->setStyleSheet(orange);
    }
    if(hit==7){
        if(p % 2 != 0){
                ui->pushButton_9->setText("X");
            }else{
                ui->pushButton_9->setText("O");
            }
            //p++;
            ui->pushButton_9->setEnabled(false);
              mas[6] = 1;

   hit=0; }
    if(hit==8){
        if(p % 2 != 0){
                ui->pushButton_7->setText("X");
            }else{
                ui->pushButton_7->setText("O");
            }
           // p++;
            ui->pushButton_7->setEnabled(false);
              mas[4] = 1;

   hit=0; }
    if(hit==9){
        if(p % 2 != 0){
                ui->pushButton_8->setText("X");
            }else{
                ui->pushButton_8->setText("O");
            }
           // p++;
            ui->pushButton_8->setEnabled(false);
              mas[5] = 1;

   hit=0; }
    if(hit==1){
        if(p % 2 != 0){
                ui->pushButton_3->setText("X");
            }else{
                ui->pushButton_3->setText("O");
            }
           // p++;
            mas[0] = 1;
            ui->pushButton_3->setEnabled(false);

   hit=0; }
    if(hit==3){
        if(p % 2 != 0){
                ui->pushButton_5->setText("X");
            }else{
                ui->pushButton_5->setText("O");
            }
            //p++;
            ui->pushButton_5->setEnabled(false);
              mas[2] = 1;
            hit=0; }
    if(hit==2){
        if(p % 2 != 0){
                ui->pushButton_4->setText("X");
            }else{
                ui->pushButton_4->setText("O");
            }
            //p++;
            ui->pushButton_4->setEnabled(false);
              mas[1] = 1;
            hit=0; }
    if(hit==4){
        if(p % 2 != 0){
                ui->pushButton_6->setText("X");
            }else{
                ui->pushButton_6->setText("O");
            }
           // p++;
            mas[3] = 1;
            ui->pushButton_6->setEnabled(false);
            hit=0; }
    if(hit==5){
        if(p % 2 != 0){
                ui->pushButton_10->setText("X");
            }else{
                ui->pushButton_10->setText("O");
            }
            //p++;
            ui->pushButton_10->setEnabled(false);
              mas[7] = 1;
            hit=0; }
    if(hit==6){
        if(p % 2 != 0){
                ui->pushButton_12->setText("X");
            }else{
                ui->pushButton_12->setText("O");
            }
            //p++;
            ui->pushButton_12->setEnabled(false);
              mas[8] = 1;
            hit=0; }




    QTimer::singleShot(50,this,SLOT(l2()));

}

void MainWindow::l2(){
    r = 0;
    for(int i = 0; i < 9; i++){
        if(mas[i] == 1) r++;
    }
    if(r == 9){
        hitt = true;
        p_ch = true;
        p = p2;
        // qDebug() << "p-----" << p;
         if(p1 == 0) p1 = 1;
         else p1 = 0;
       for(int i = 0; i < 9; i++){
           mas[i] = 0;
       }

           if(p1 == 0){
           ui->pushButton_3->setEnabled(true);
           ui->pushButton_4->setEnabled(true);
           ui->pushButton_5->setEnabled(true);
           ui->pushButton_6->setEnabled(true);
           ui->pushButton_7->setEnabled(true);
           ui->pushButton_8->setEnabled(true);
           ui->pushButton_9->setEnabled(true);
           ui->pushButton_10->setEnabled(true);
           ui->pushButton_11->setEnabled(true);
           ui->pushButton_12->setEnabled(true);
           }
           //if(p % 2 == 0 ) p = 0;
           //else p = 1;
           ui->pushButton_3->setText("");
           ui->pushButton_4->setText("");
           ui->pushButton_5->setText("");
           ui->pushButton_6->setText("");
           ui->pushButton_7->setText("");
           ui->pushButton_8->setText("");
           ui->pushButton_9->setText("");
           ui->pushButton_10->setText("");
           ui->pushButton_11->setText("");
           ui->pushButton_12->setText("");


    }
    QTimer::singleShot(50,this,SLOT(l1()));


}

void MainWindow::block(){
    if(hitt == true){
        if(p1 == 1)
        p = 1;
        else p = 0;
        hitt = false;
        //qDebug() << "123455676543212345654 p - " << p;
    }
    QString prob =   QString::number(p);
    QByteArray prob2 =  QByteArray::fromHex(prob.toUtf8()) ;
    //qDebug() << "prob = " << prob;
   // qDebug() << "ppppp = " << p;
     _socket.write( QByteArray("p"));
    _socket.write(prob2);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    if(c == false){
        c = true;
        p1 = 0;
    }

    polim*color=&a;
    color->setcolor(75,255,132);
    QString green="background-color:rgb("+QString::number(color->get_r())+","+QString::number(color->get_g())+","+QString::number(color->get_b())+");";
    ui->pushButton_11->setStyleSheet(green);
}
void MainWindow::on_pushButton_9_clicked()
{
    block();
    if(p % 2 == 0){
            ui->pushButton_9->setText("X");
        }else{
            ui->pushButton_9->setText("O");
        }
        p++;
        ui->pushButton_9->setEnabled(false);

        mas[6]=1;
        wait(50);
_socket.write(QByteArray("7"));

}


void MainWindow::on_pushButton_7_clicked()
{
    block();
    if(p % 2 == 0){
            ui->pushButton_7->setText("X");
        }else{
            ui->pushButton_7->setText("O");
        }
        p++;
        ui->pushButton_7->setEnabled(false);

       mas[4]=1;
       wait(50);
_socket.write(QByteArray("8"));

}








void MainWindow::on_pushButton_8_clicked()
{
    block();
    if(p % 2 == 0){
            ui->pushButton_8->setText("X");
        }else{
            ui->pushButton_8->setText("O");
        }
        p++;
        ui->pushButton_8->setEnabled(false);

mas[5]=1;
wait(50);
_socket.write(QByteArray("9"));

}


void MainWindow::on_pushButton_3_clicked()
{
    block();
    if(p % 2 == 0){
            ui->pushButton_3->setText("X");
        }else{
            ui->pushButton_3->setText("O");
        }
        p++;
        ui->pushButton_3->setEnabled(false);

mas[0]=1;
wait(50);
_socket.write(QByteArray("1"));
}


void MainWindow::on_pushButton_4_clicked()
{
    block();
    if(p % 2 == 0){
        ui->pushButton_4->setText("X");
    }else{
        ui->pushButton_4->setText("O");
    }
    p++;
    ui->pushButton_4->setEnabled(false);

mas[1]=1;
wait(50);
 _socket.write(QByteArray("2"));

}


void MainWindow::on_pushButton_5_clicked()
{
    block();
    if(p % 2 == 0){
            ui->pushButton_5->setText("X");
        }else{
            ui->pushButton_5->setText("O");
        }
        p++;
        ui->pushButton_5->setEnabled(false);

mas[2]=1;
//qDebug() << "p_b = " << p;
wait(50);
_socket.write(QByteArray("3"));

}


void MainWindow::on_pushButton_6_clicked()
{
    block();
    if(p %2 == 0) {
        ui->pushButton_6->setText("X");
    }
else{
        ui->pushButton_6->setText("O");
    }

    p++;
    ui->pushButton_6->setEnabled(false);

mas[3]=1;
wait(50);
_socket.write(QByteArray("4"));

}


void MainWindow::on_pushButton_10_clicked()
{
    block();
    if(p %2 == 0) {
        ui->pushButton_10->setText("X");
    }
else{
        ui->pushButton_10->setText("O");
    }

    p++;
    ui->pushButton_10->setEnabled(false);

mas[7]=1;
wait(50);
_socket.write(QByteArray("5"));
}


void MainWindow::on_pushButton_12_clicked()
{
    block();
    if(p %2 == 0) {
        ui->pushButton_12->setText("X");
    }
else{
        ui->pushButton_12->setText("O");
    }

    p++;
    ui->pushButton_12->setEnabled(false);

mas[8]=1;
wait(50);
_socket.write(QByteArray("6"));
}

#include "ParticipantView.h"

ParticipantView::ParticipantView(Participant p1, Presenter & p, QWidget * parent) : QWidget(parent), participant{ p1 }, presenter { p }
{
	ui.setupUi(this);

	this->presenter.addObserver(this);
	this->populateListObs();
	//this->connectSignals();
	ui.scoreBox->insert(QString::fromStdString("0"));
	//SLOTS
	//connect(ui.questionList, SIGNAL(itemSelectionChanged(&QListWidget)), this, SLOT(listItemChanged(&ParticipantView)));
	connect(ui.answerButton, SIGNAL(clicked()), this, SLOT(answerQuestion()));
	connect(ui.questionTable, SIGNAL(cellClicked(int, int)), this, SLOT(disable(int, int)));
}

ParticipantView::~ParticipantView()
{
	this->presenter.removeObserver(this);
}

void ParticipantView::update()
{
	this->populateListObs();
}

void ParticipantView::populateListObs()
{
	//ui.questionList->clear();
	//int index = 0;
	//for (index = 0; index < this->presenter.getQs().size(); index++)
		//ui.questionList->insertItem(index, QString::fromStdString(this->presenter.getQs().at(index).toString()));
	
	ui.questionTable->clear();
	int index;
	ui.questionTable->setRowCount(this->presenter.getQs().size());

	index = 0;
	this->presenter.sortScore();
	for (auto q : this->presenter.getQs())
	{
		ui.questionTable->setItem(index, 0, new QTableWidgetItem(QString::fromStdString(std::to_string(q.getId()))));
		ui.questionTable->setItem(index, 1, new QTableWidgetItem(QString::fromStdString(q.getText())));
		ui.questionTable->setItem(index, 2, new QTableWidgetItem(QString::fromStdString(std::to_string(q.getScore()))));
		index++;
	}
	
}

void ParticipantView::answerQuestion()
{
	QString answer = ui.answerBoxx->text();
	std::string ans = answer.toStdString();

	QList<QTableWidgetItem*> l = ui.questionTable->selectedItems();
	QTableWidgetItem* item = l.at(0);
	int row = item->row();
	int column = item->column();
	item = ui.questionTable->item(row, 0);
	QString s = item->text();
	std::string ss = s.toStdString();

	std::string correctAnswer;
	int Qscore;
	for (auto q : this->presenter.getQs())
	{
		if (q.getId() == std::stoi(ss))
		{
			correctAnswer = q.getAnswer();
			Qscore = q.getScore();
			break;
		}
	}
	

	if (correctAnswer != ans)
	{
		QMessageBox::critical(this, "Error", "Wrong answer!");
	}

	if (correctAnswer == ans && item->backgroundColor() != Qt::green)
	{
		ui.questionTable->item(row, 0)->setBackgroundColor(Qt::green);
		ui.questionTable->item(row, 1)->setBackgroundColor(Qt::green);
		ui.questionTable->item(row, 2)->setBackgroundColor(Qt::green);

		int newScore = 0;
		newScore = this->participant.getScore() + Qscore;
		this->participant.setScore(newScore);
		ui.scoreBox->clear();
		ui.scoreBox->insert(QString::fromStdString(to_string(newScore)));
	}
	else if (item->backgroundColor() == Qt::green)
	{
		QMessageBox::critical(this, "Error", "Question already answered!");
	}

}

void ParticipantView::disable(int x, int y)
{
	//QList<QTableWidgetItem*> l = ui.questionTable->selectedItems();
	//QTableWidgetItem* item = l.at(0);
	//int row = item->row();
	//int column = item->column();

	if (ui.questionTable->item(x, y)->background().color() == Qt::green)
	{
		ui.answerButton->setEnabled(false);
	}
	else
	{
		ui.answerButton->setEnabled(true);
	}

}
//void ParticipantView::on_tableQ_cellClicked(int row, int column)
//{


	//    int r = this->answerQ();
	//    if(r == row && r != -1)
	//    {
	//    QMessageBox::critical(this, "Eroare", "Salvarea nu s-a putut executa: ");
	//    ui->tableQ->item(row, column)->setBackgroundColor(Qt::green);
	//    ui->tableQ->item(row, column+1)->setBackgroundColor(Qt::green);
	//    ui->tableQ->item(row, column+2)->setBackgroundColor(Qt::green);
	//    }
	//this->answerQ();

//}




//void ParticipantView::on_tableQ_itemClicked(QTableWidgetItem *item)
//{
	//QString s = item->text();
	//string ss = s.toStdString();

	//string correctanswer;
	//for (auto q : this->presenter.getQs())
		//if (q.getId() == stoi(ss))
		//{
			//correctansw VNtff        HH
  ߋ    s                        ��p(�����p(�����p(�����p(���        ��O7������#�����m0�����m0���%��1��� _G�f��>�1���(�k�|� �      �                   (�k�|�        �Im(���                                                              @�^                    ��&���                                        ``0��m0�����m0��� �      �      �     ��m0�����p(�����p(���        H�p(���        83n0���        ��p(�����p(���`�p(���        �       H�p(���H�p(����p(������#���0                                                    �                               8�m0���                       ��p(���        @q(����";)���yx�    ��p(�����p(���             ���/���`�p(���             ��p(���              �                          �     ���(������(���                �                                                               ��p(�����p(���                                  � � @      � �     @s1)����       �      �      ��p(������(���                               !      ��0���                �    �p(����q(���`��(���                �p(���8�p(���8�p(��� "     �p(���0+q(����r(���        �       ���(������(���        ��    �     P  �C                          ��p(���        p c r e . d l l                                                       VSeTd~��<���         d                                  (         P   n��E�ұJ;E�P[C'X�k            MPih���<���[����,�[jh�V���hcA ��        	ClfA��<���D,�	���                       , �������/������0���                         E R . E X E - 0 C 8 3 6 6 B  �p(���        	 Free���<����=�/������)���NtFLހ�<����l*���@W�+�����      `��0��� 
     ����	���MmSm��<����o2���                                     SeTd^��<���        =�0���#&��   �      $            =�0���#&��                      �            +��  0            !N�n�
eW�~���N&r�o}��&cǜ        FMfn��<����            ce     (�p(���                �(20���                 �     x      � �     ��p(���. .     ��p(���                                                                                       \ D e v i c e \ H a r d d i s k V o l u m e 5 \ U s e r s \ c a t a d \ A p p D a t a \ L o c a l \ P a c k a g e s \ c 5 e 2 5 2 4 a - e a 4 6 - 4 f 6 7 - 8 4 1 f - 6 a 9 4 6 5 d 9 d 5 1 5 _ c w 5 n 1 h 2 t x y e w y       WofSޏ�<���        �R~%��� �/����)���        88�)���P�/���`��'���                             ��0���                                                           �}     Eo     @Z�-����=)����n�/���                MSeg���<������/���               @                     �                               Free��<����h�1��� ��1���FMfn.��<����            J8     (�!0���                �2������$���         @     x      � �     �p(���. .     �p(���                                                                                       \ D e v i c e \ H a r d d i s k V o l u m e 5 \ U s e r s \ c a t a d \ A p p D a t a \ L o c a l \ M i c r o s o f t \ W i n d o w s \ E x p l o r e r \ i c o n c a c h e _ 4 8 . d b         FIcsΊ�<���        p[%�����G.�����p(���h��(���        еG.���@��-���                             �[�(�����l(���        `��'�����r(���        ��(���   Й� �              MmSm���<���Ps�$���@                                     FIcsS T E M         p[%����q0�����p(���( �(���         q0���@��-���                             �?s(����/u)���        `��'��� \u(���        �.v)���   љ� 
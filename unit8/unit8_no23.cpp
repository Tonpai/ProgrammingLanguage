#include <iostream>
#include <array>

using namespace std;

class Matrix{
    private:
        int nrow;
        int ncol;
        double ** data;
    public:
        Matrix(){
            this->nrow = 10;
            this->ncol = 10;
            data = (double **) new double[nrow];
            for(int i = 0 ; i < this -> nrow; i++){
                data[i] = (double *) new double[this->ncol];
            }
        }
        Matrix(int nrow, int ncol){
            this->nrow = nrow;
            this->ncol = ncol;
            data = (double **) new double[nrow];
            for(int i = 0 ; i < this -> nrow; i++){
                data[i] = (double *) new double[this->ncol];
            }
        }
        void allocateData(){
            data = (double **) new double[this->nrow];
            for(int i = 0 ; i < this -> nrow; i++){
                data[i] = (double *) new double[this->ncol];
            }
        }
        
        double * operator[] (int i){
            return data[i];
        }
        
        double operator() (int i, int j){
            return data[i][j];
        }
        
        void setElement(int i, int j, double v){
            data[i][j] = v;
        }
        
        ~Matrix(){
            for(int i=0; i<nrow; i++){
                delete [] data[i];
            }
            delete [] data;
        }
        
        
        
        Matrix& operator=(Matrix &r){
            if(this == &r)
                return *this;
            for(int i=0; i<nrow; i++){
                delete [] data[i];
            }
            delete [] data;
            this->nrow = r.nrow;
            this->ncol = r.ncol;
            this->allocateData();
            for(int i=0; i<r.nrow; i++){
                for(int j=0; j<r.ncol; j++){
                    this->data[i][j] = r[i][j];
                }
            }
            return *this;
        }
        Matrix & operator + (Matrix & a){
            Matrix *m = new Matrix(a.nrow, a.ncol);
            for(int i=0; i<a.nrow; i++){
                for(int j=0; j<a.ncol; j++){
                    m->setElement(i,j, a[i][j]*data[i][j]);
                }
            }
            return *m;
        }
        Matrix & operator * (Matrix & a){
            Matrix *m = new Matrix(a.nrow, a.ncol);
            for(int i=0; i<a.nrow; i++){
                for(int j=0; j<a.ncol; j++){
                    m->setElement(i,j, a[i][j]*data[i][j]);
                }
            }
            return *m;
        }
        void showMatrix(){
            for(int i=0; i<this->nrow; i++){
                for(int j=0; j<this->ncol; j++){
                    cout << this->data[i][j]<< " ";
                }
                cout << endl;
            }
        }
        
        friend Matrix & operator + (Matrix &a);
        friend Matrix & operator * (Matrix &a);
};

int main(){
    Matrix ma(2,2);
    Matrix na(2,2);
    
    double d[2][2] = {{1,2},{2.5,5}};
    double a[2][2] = {{2,3},{5,1}};
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            ma.setElement(i, j, d[i][j]);
            na.setElement(i, j, a[i][j]);
        }
    }
    Matrix c(2,2);
    c = ma + na;
    c.showMatrix();
    return 0;
}
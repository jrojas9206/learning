import numpy as np 
import tensorflow as tf 
from tensorflow import keras 

EPOCHS     = 200 
BATCH_SIZE = 128
VERBOSE    = 1 
NB_CLASSES = 10 
N_HIDDEN   = 128 
VALIDATION_SPLIT = 0.2

mnist = keras.datasets.mnist

(X_train, y_train), (X_test, y_test) = mnist.load_data()

RESHAPE = 784 # MNIST is a set of images of (60K,28,28), we will creta a simple array of 
              # (60K, 784) 

X_train = X_train.reshape(60000, RESHAPE).astype('float32')
X_test  = X_test.reshape(10000, RESHAPE).astype('float32')

X_test /= 255.0
X_train /= 255.0

print(X_train.shape[0], 'train samples')
print(X_test.shape[0], 'train samples')

Y_train = tf.keras.utils.to_categorical(y_train, NB_CLASSES)
Y_test  = tf.keras.utils.to_categorical(y_test, NB_CLASSES)

model = tf.keras.Sequential()

model.add(keras.layers.Dense(N_HIDDEN, input_shape=(RESHAPE,), 
           name="dense_layer", activation="relu"))
model.add(keras.layers.Dense(N_HIDDEN, name="dense_layer_2", activation="relu"))
model.add(keras.layers.Dense(NB_CLASSES, name="dense_layer_3", activation="softmax"))

model.summary()

model.compile(optimizer='SGD', loss='categorical_crossentropy', 
              metrics=['accuracy'])

model.fit(X_train, Y_train, batch_size=BATCH_SIZE, epochs=EPOCHS, 
          verbose=VERBOSE, validation_split=VALIDATION_SPLIT)


test_loss, test_acc = model.evaluate(X_test, Y_test)

print("Test Acc: ", test_acc)



